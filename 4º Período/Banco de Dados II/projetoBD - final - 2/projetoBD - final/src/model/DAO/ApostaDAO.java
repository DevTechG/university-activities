package model.DAO;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.List;
import model.bean.Aposta;

public class ApostaDAO implements CRUD {

    @Override
    public void salvar(Object bean) {
        Aposta aposta = (Aposta) bean;
        
        if (aposta != null) {
            Connection conn = null;
            try {
                conn = Conexao.getConexao();
                PreparedStatement pstm;
                pstm = conn.prepareStatement("insert into aposta (esporte, partida, mercado, valor, odd, lucro, acerto) values (?, ?, ?, ?, ?, ?, ?)");
                pstm.setString(1,aposta.getEsporte());
                pstm.setString(2, aposta.getPartida());
                pstm.setString(3, aposta.getMercado());
                pstm.setFloat(4, aposta.getValor());
                pstm.setFloat(5, aposta.getOdd());
                pstm.setFloat(6, aposta.getLucro());
                pstm.setBoolean(7, aposta.getAcerto());
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
        Aposta aposta = (Aposta) bean;
        
        if (aposta != null) {
            Connection conn = null;
            try {
                conn = Conexao.getConexao();
                PreparedStatement pstm;
                pstm = conn.prepareStatement("UPDATE aposta "
                        + "SET esporte = ?, partida = ?, mercado = ?,"
                        + " valor = ?, odd = ?, lucro = ?, acerto = ?"
                        + " WHERE aposta.cod = ?");
                pstm.setString(1, aposta.getEsporte());
                pstm.setString(2, aposta.getPartida());
                pstm.setString(3, aposta.getMercado());
                pstm.setFloat(4, aposta.getValor());
                pstm.setFloat(5, aposta.getOdd());
                pstm.setFloat(6, aposta.getLucro());
                pstm.setBoolean(7, aposta.getAcerto());
                pstm.setInt(8, aposta.getCod());
                pstm.execute();
                System.out.println("Atualizado");
                Conexao.fechaConexao(conn);
            } catch (SQLException e) {
                System.out.println("Erro: "+e);
            }
        }
    }

    @Override
    public void apagar(int cod) {
        Connection conn = null;
            try {
                conn = Conexao.getConexao();
                PreparedStatement pstm;
                pstm = conn.prepareStatement("Delete from aposta where cod = ?");
                pstm.setInt(1, cod);
                pstm.execute();
                System.out.println("Apagado");
                Conexao.fechaConexao(conn);
            } catch (SQLException e) {
                System.out.println("Erro: "+e);
            }
        }

    @Override
    public List<Object> listarTodos() {
    List<Object> apostas = new ArrayList<Object>();
		
	Connection conn = null;
	PreparedStatement pstm=null;
	try {
            conn = Conexao.getConexao();           
            pstm = conn.prepareStatement("select * from aposta");
            ResultSet rset = null;   
            rset = pstm.executeQuery();
            while(rset.next()) {
            	Aposta aposta = new Aposta();
                aposta.setCod(rset.getInt(("cod")));
            	aposta.setEsporte(rset.getString("esporte"));
                aposta.setPartida(rset.getString("partida"));
                aposta.setMercado(rset.getString("mercado"));
                aposta.setValor(rset.getFloat("valor"));
                aposta.setOdd(rset.getFloat("odd"));
                aposta.setLucro(rset.getFloat("lucro"));
                aposta.setAcerto(rset.getBoolean("acerto"));
            	apostas.add(aposta);	 
            }
            }catch(Exception ex) {
            	System.out.println("Erro: " + ex);
            }
            Conexao.fechaConexao(conn,pstm);
    for(int i = 0; i < apostas.size(); i++) {
        Aposta aux = (Aposta) apostas.get(i);
            System.out.println(" | "+aux.getCod()+" | "+
                    aux.getEsporte()+" | "+
                    aux.getPartida()+" | "+
                    aux.getMercado()+" | "+
                    aux.getValor()+" | "+
                    aux.getOdd()+" | "+
                    aux.getLucro()+" | "+
                    aux.getAcerto()+" |");
        }  
        return apostas;
    }
    
}
