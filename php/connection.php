<?php

$host="localhost";
$username="searchke_aksh";
$password="AKSHGUPTA1996";
$dbname="searchke_aksh";

$connect=mysqli_connect($host,$username,$password,$dbname);

if(!$connect)
{
	echo "db not connected".mysqli_connect_error();
}
else
{
	echo "db connected";
}



?>