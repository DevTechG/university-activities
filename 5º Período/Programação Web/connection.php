<?php 
	$hostname = "localhost";
	$database = "banco_imagens";
	$user = "root";
	$password = "";
	
	$connection = mysqli_connect($hostname, $user, $password, $database);

	if(!$connection){
		die("Houve um erro: ".mysqli_connect_error());
	}

?>

