<?php
    include("connection.php");

    $sql = 'SELECT * FROM `images`';

    $link = $_GET['link'];

    if(mysqli_query($connection, $sql)){
        echo "Consulta Feita!";
        echo $link;
    }else{
        echo "Erro".mysqli_connect_error($connection);
    }

    mysqli_close($connection);
?>