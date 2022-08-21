package jdbc;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class DAO {
    public void insert(Produtos produtos) throws SQLException {
        String _sql="INSERT INTO  produtos"+"(Descricao,Unidade,CodigoBarra,Referencia)"+"VALUES(?,?,?,?)";
        Connection con=Conexao.getConnect();
        PreparedStatement stmt=con.prepareStatement(_sql);
        stmt.setString(1,produtos.Descricao);
        stmt.setString(2,produtos.Unidade);
        stmt.setString(3,produtos.CodigoBarra);
        stmt.setString(4,produtos.Referencia);
        stmt.execute();
        System.out.println("Cadastro Efetuado com sucesso!");
    }
}
