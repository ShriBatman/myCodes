<?php

require "connection.php";
$house=$_POST['House'];
$street=$_POST['Street'];
$city=$_POST['City'];
$country=$_POST['Country'];
$email=$_POST['Email']

$insert="INSERT INTO  address VALUES('$house','$street','$city','$country','email')";

$insert_check=mysqli_query($connect,$insert);

if(!$insert_check)
{
	echo "insertion not successfull".mysqli_error();
}
else {
	echo "insertion successfull";
}


?>