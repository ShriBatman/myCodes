<?php

require "connection.php";
$query="SELECT * FROM getidea";
$que="SELECT * FROM address";
$add=mysqli_query($connect,$que);
$result=mysqli_query($connect,$query);

$response=array();
$res=array();

while($rowadd=mysqli_fetch_array($add))
	{
		array_push($res,array('house' => $rowadd[0], 'street' => $rowadd[1] , 'city' => $rowadd[2] , 'country' => $rowadd[3] ));
	}

	echo "$res";

while($row=mysqli_fetch_array($result))
{
	array_push($response,array("name"=>$row[0],"mobile"=>$row[1],"email"=>$row[2],"idea"=>$row[3]));

	$check=$response["email"];

	if($response["email"]==$check)

}

echo json_encode(array("res"=>$response));






?>