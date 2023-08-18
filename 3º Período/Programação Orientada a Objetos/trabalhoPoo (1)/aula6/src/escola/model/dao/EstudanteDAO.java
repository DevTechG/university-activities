package escola.model.dao;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;
import java.util.ArrayList; 
import javax.swing.JOptionPane;
import ecola.model.*;
import escola.model.bean.*;


public class EstudanteDAO implements CRUD{

	@Override
	public void salvar(Object bean) {
		Estudante estudante;
		
		estudante = (Estudante) bean;
		
		if(estudante != null) {
			Connection conn = null;
			try {
				conn = Conexao.getConexao();
				PreparedStatement pstm;
				pstm = conn.prepareStatement("INSERT INTO estudante (nome, idade) values (?,?)");
				pstm.setString(1, estudante.getNome());
				pstm.setInt(2, estudante.getIdade());
				pstm.execute();
				//JOptionPane.showMessageDialog(null, "Salvo com sucesso");
				Conexao.fechaConexao(conn);
			}catch(Exception e) {
				System.out.println("não foi possivel salvar" + e);
			}
		}
	}

	@Override
	public void atualizar(Object bean){
		Estudante estudante = (Estudante) bean;
		if(estudante != null){
		Connection conn = null;
		try {
            conn = Conexao.getConexao();
            PreparedStatement pstm;
            pstm = conn.prepareStatement("UPDATE estudante set nome = ?,idade = ? WhERE id = ?");
           
            pstm.setString(1, estudante.getNome());
            pstm.setInt(2, estudante.getIdade());
            
            pstm.setInt(3, estudante.getId());
            pstm.execute();
            Conexao.fechaConexao(conn, pstm);
		}catch(Exception ex) {
            	System.out.println("Erro: " + ex);
		}		
		}
		
	}

	@Override
	public void apagar(int id) {

		Connection conn = null;

		try {
            conn = Conexao.getConexao();
            PreparedStatement pstm;
            pstm = conn.prepareStatement("DELETE FROM estudante WHERE id = ?");
            pstm.setInt(1, id);
            
            pstm.execute();
            
            Conexao.fechaConexao(conn, pstm);
		}catch(Exception ex) {
            	System.out.println("Erro: " + ex);
        }
		
		
		
	}

	@Override
	public Object getById(int id) {
		
		Connection conn = null;
		Estudante estudante = new Estudante();
		
		
		try {
			PreparedStatement pstm = null ;
			
            conn = Conexao.getConexao();    
            pstm = conn.prepareStatement("select * from estudante where id = ?");
            pstm.setInt(1, id);
             ResultSet rset ; 
             rset = pstm.executeQuery();
             
            if(rset.next()){
            	estudante.setId(rset.getInt("id"));
            	estudante.setNome(rset.getString("nome"));
            	estudante.setIdade(rset.getInt("idade")); 
            	}
           
            	

            /*ResultSet rset = null;
            rset = pstm.executeQuery();
            	//estudante.setId(rset.getInt("id"));
            	estudante.setNome(rset.getString("nome"));
            	estudante.setIdade(rset.getInt("idade"));*/
            	Conexao.fechaConexao( conn ,pstm );
            	
		}catch(Exception ex) {
            	System.out.println("Erro: " + ex);
        }
        return estudante;
        
	}

	@Override
	public List<Object> getAll() {
		// TODO Auto-generated method stub
		
		List<Object> estudantes = new ArrayList<Object>();
		
		Connection conn = null;
		PreparedStatement pstm=null;
		try {
            conn = Conexao.getConexao();           
            pstm = conn.prepareStatement("select * from estudante");
            ResultSet rset = null;   
            rset = pstm.executeQuery();
            
            while(rset.next()) {
            	Estudante estudante = new Estudante();
            	
            	estudante.setId(rset.getInt("id"));
            	estudante.setNome(rset.getString("nome"));
            	estudante.setIdade(rset.getInt("idade"));
            	
            	estudantes.add(estudante);	 
            }
            }catch(Exception ex) {
            	System.out.println("Erro: " + ex);
            }
            Conexao.fechaConexao(conn,pstm);
           
		return estudantes;
	}
	

}
