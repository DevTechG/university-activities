package escola.model.dao;

import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.Connection;

public class Conexao {
	private static final String URL = "jdbc:mysql://localhost:3306/escola";
	private static final String USUARIO = "root";
	private static final String SENHA = "1234";
		
	public static Connection getConexao() {
		Connection connect = null;
		try {
			connect = DriverManager.getConnection(URL, USUARIO, SENHA);
			return connect;
		}catch(Exception e){
			System.err.println(e);
			System.exit(1);
		}
		return connect;
	}
	
	public static void fechaConexao(Connection connect) {
		try {
			if(connect != null) {
				connect.close();
				System.out.println("conexão fechada");
			}
		}catch (Exception e) {
			System.err.println(e);
		}
	}
	
	public static void fechaConexao(Connection connect, PreparedStatement pstm) {
		try {
			if(connect != null) {
				fechaConexao(connect);
			}
			if(pstm != null) {
				pstm.close();
				System.out.println("Conexão fechada do pstm");
			}
		}catch(Exception e) {
			System.err.println(e);
		}
		
	}
}
