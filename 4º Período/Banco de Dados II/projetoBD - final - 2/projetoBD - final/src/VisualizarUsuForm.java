package com.mycompany.telas;

import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.ArrayList;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTable;
import javax.swing.JTextField;
import javax.swing.border.EmptyBorder;
import javax.swing.table.DefaultTableModel;

public class VisualizarUsuForm  extends JFrame{
    private JPanel contentPane;
    private JTable tableApostas;
    private JTextField textNome;
    private JTextField textEndereco;
    private JTextField textEmail;
    private JTextField textTelefone;
    private JTextField textCPF;
    private JTextField textUsuario;
    private JTextField textSenha;
    private JButton btnVoltar;
    private JButton btnAlterar;    
    
    public static void main(String[] args){
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    VisualizarUsuForm frameVisu = new VisualizarUsuForm();
                    frameVisu.setTitle("Dados do Usuario");
                    frameVisu.setVisible(true);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }
    
    public VisualizarUsuForm(){
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	setBounds(500, 300, 290, 450);
	contentPane = new JPanel();
	contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
	setContentPane(contentPane);
	contentPane.setLayout(null);
        
        JLabel lbCadUsu = new JLabel("Dados do Usuario");
	lbCadUsu.setBounds(90, 0, 200, 50);
	contentPane.add(lbCadUsu);
                
	JLabel lbNome = new JLabel("Nome");
	lbNome.setBounds(10, 45, 60, 26);
	contentPane.add(lbNome);
		
	textEndereco = new JTextField();
	textEndereco.setBounds(75, 45, 130, 26);
	contentPane.add(textEndereco);
	textEndereco.setColumns(10);
        
	JLabel lbEndereco = new JLabel("Endereco");
        lbEndereco.setBounds(10, 80, 60, 26);
	contentPane.add(lbEndereco);
		
	textEndereco = new JTextField();
	textEndereco.setBounds(75, 80, 130, 26);
	contentPane.add(textEndereco);
	textEndereco.setColumns(10);
               
        JLabel lbEmail = new JLabel("Email");
	lbEmail.setBounds(10, 115, 60, 26);
	contentPane.add(lbEmail);
		
	textEmail = new JTextField();
	textEmail.setBounds(75, 115, 130, 26);
	contentPane.add(textEmail);
	textEmail.setColumns(10);

        JLabel lbTelefone = new JLabel("Telefone");
        lbTelefone.setBounds(10, 150, 60, 26);
	contentPane.add(lbTelefone);
		
	textTelefone = new JTextField();
	textTelefone.setBounds(75, 150, 130, 26);
	contentPane.add(textTelefone);
	textTelefone.setColumns(10);
               
        JLabel lbCPF = new JLabel("CPF");
	lbCPF.setBounds(10, 185, 60, 26);
	contentPane.add(lbCPF);
		
	textCPF = new JTextField();
	textCPF.setBounds(75, 185, 130, 26);
	contentPane.add(textCPF);
	textCPF.setColumns(10);
       
        JLabel lbUsuario = new JLabel("Usuario");
	lbUsuario.setBounds(10, 220, 60, 26);
	contentPane.add(lbUsuario);
		
        textUsuario = new JTextField();
	textUsuario.setBounds(75, 220, 130, 26);
	contentPane.add(textUsuario);
	textUsuario.setColumns(10);
      
        JLabel lbSenha = new JLabel("Senha");
	lbSenha.setBounds(10, 255, 60, 26);
	contentPane.add(lbSenha);
		
	textSenha = new JTextField();
	textSenha.setBounds(75, 255, 130, 26);
	contentPane.add(textSenha);
	textSenha.setColumns(10);
        
        btnVoltar = new JButton("Voltar");
        btnVoltar.setBounds(75, 290, 130, 26);
	contentPane.add(btnVoltar);
        
        btnAlterar = new JButton("Alterar");
        btnAlterar.setBounds(75, 325, 130, 26);
	contentPane.add(btnAlterar);
        
    }
}
