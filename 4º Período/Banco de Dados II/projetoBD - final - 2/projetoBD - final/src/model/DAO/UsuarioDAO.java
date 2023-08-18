package model.DAO;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import model.bean.Usuario;

public class UsuarioDAO  implements CRUD {

    @Override
    public void salvar(Object bean) {
        Usuario usuario = (Usuario) bean;
        
        if (usuario != null) {
            Connection conn = null;
            try {
                conn = Conexao.getConexao();
                PreparedStatement pstm;
                pstm = conn.prepareStatement("insert into cliente (nome, email, endereco, cpf, senha, usuario, telefone) values (?, ?, ?, ?, ?, ?, ?)");
                pstm.setString(1,usuario.getNome());
                pstm.setString(2, usuario.getEmail());
                pstm.setString(3, usuario.getEnd());
                pstm.setString(4, usuario.getCpf());
                pstm.setString(5, usuario.getSenha());
                pstm.setString(6, usuario.getUsuario());
                pstm.setString(7, usuario.getTelefone());
                pstm.execute();
                System.out.println("Armazenado");
                Conexao.fechaConexao(conn);
            } catch (SQLException e) {
                System.out.println("Erro: "+e);
            }
        }
    }

     @Override
    public void atualizar(Object bean) {
        Usuario usuario = (Usuario) bean;
        
        if (usuario != null) {
            Connection conn = null;
            try {
                conn = Conexao.getConexao();
                PreparedStatement pstm;
                pstm = conn.prepareStatement("insert into cliente (nome, email, endereco, cpf, senha, usuario, telefone) values (?, ?, ?, ?, ?, ?, ?)");
                pstm.setString(1,usuario.getNome());
                pstm.setString(2, usuario.getEmail());
                pstm.setString(3, usuario.getEnd());
                pstm.setString(4, usuario.getCpf());
                pstm.setString(5, usuario.getSenha());
                pstm.setString(6, usuario.getUsuario());
                pstm.setString(7, usuario.getTelefone());
                pstm = conn.prepareStatement("UPDATE cliente "
                        + "SET nome = ?, email = ?, endereco = ?,"
                        + " cpf = ?, senha = ?, usuario = ?, telefone = ?"
                        + " WHERE cliente.id = ?");
                pstm.setString(1,usuario.getNome());
                pstm.setString(2, usuario.getEmail());
                pstm.setString(3, usuario.getEnd());
                pstm.setString(4, usuario.getCpf());
                pstm.setString(5, usuario.getSenha());
                pstm.setString(6, usuario.getUsuario());
                pstm.setString(7, usuario.getTelefone());
                pstm.setInt(8, usuario.getId());
                pstm.execute();
                System.out.println("Atualizado");
                Conexao.fechaConexao(conn);
            } catch (SQLException e) {
                System.out.println("Erro: "+e);
            }
        }
    }

    @Override
    public void apagar(int id) {
        Connection conn = null;
            try {
                conn = Conexao.getConexao();
                PreparedStatement pstm;
                pstm = conn.prepareStatement("Delete from cliente where id = ?");
                pstm.setInt(1, id);
                pstm.execute();
                System.out.println("Apagado");
                Conexao.fechaConexao(conn);
            } catch (SQLException e) {
                System.out.println("Erro: "+e);
            }    }

    @Override
    public List<Object> listarTodos() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}

