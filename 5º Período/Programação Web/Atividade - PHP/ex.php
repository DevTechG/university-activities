<?php

try {
    $conexao = new mysqli("localhost", "root", "", "instagram");
    $consulta = "SELECT * FROM posts";

    $comando = $conexao->prepare($consulta);
    $comando->execute();
    $resultado = $comando->get_result();

    echo json_encode(($resultado->fetch_all()));

} catch (mysqli_sql_exception $e) {
    echo "MySQLi Error Code: " . $e->getCode() . "<br />";
    echo "Exception Msg: " . $e->getMessage();
    exit(); 
}

$conexao->close();
?>

