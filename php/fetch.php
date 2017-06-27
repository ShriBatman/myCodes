<?php

require "connection.php";
$query="SELECT * FROM getidea";
$result=mysqli_query($connect,$query);

$response=array();

while($row=mysqli_fetch_array($result))
{
	array_push($response,array("name"=>$row[0],"mobile"=>$row[1],"email"=>$row[2],"idea"=>$row[3]));

}

echo json_encode(array("res"=>$response));






?>