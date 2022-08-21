package jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
public class Conexao  {
 public static Connection getConnect() throws SQLException {
     final String url="jdbc:mysql://localhost:3306/jdbc?verifyCertificate=false&useSSL=true";
     final String usuario="root";
     final String senha="";
     Connection conexao;
     conexao=DriverManager.getConnection(url,usuario,senha);
     return conexao;
 }
}