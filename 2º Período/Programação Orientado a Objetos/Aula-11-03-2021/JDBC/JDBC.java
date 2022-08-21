package jdbc;

import java.sql.Connection;
import java.sql.SQLException;
import java.util.Scanner;

public class JDBC {

    public static void main(String[] args) throws SQLException {
        Scanner entrada= new Scanner(System.in);
        Produtos prod = new Produtos();
        
        System.out.println("Entre com a descrição: ");
        prod.Descricao=entrada.nextLine();
        System.out.println("Entre com a unidade: ");
        prod.Unidade=entrada.nextLine();
        System.out.println("Entre com a código de barra: ");
        prod.CodigoBarra=entrada.nextLine();
        System.out.println("Entre com a referência: ");
        prod.Referencia=entrada.nextLine();
        DAO inserir = new DAO();
        inserir.insert(prod);
        entrada.close();
    }
    
}
