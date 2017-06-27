<?php

require "connection.php";
$name=$_POST['Name'];
$mobile=$_POST['Mobile'];
$email=$_POST['Email'];
$idea=$_POST['Idea'];

$insert="INSERT INTO  getidea VALUES('$name','$mobile','$email','$idea')";

$insert_check=mysqli_query($connect,$insert);

if(!$insert_check)
{
	echo "insertion not successfull".mysqli_error();
}
else {
	echo "insertion successfull";
}


?>