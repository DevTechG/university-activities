package com.mycompany.telas;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;

class LoginForm extends JFrame{
    private JPanel contentPane;
        
    public static void main(String[] args) {

    JFrame frame = new JFrame();
    frame.setTitle("Tela de login");
    frame.setSize(300, 330);
    frame.setLocation(6, 6);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    JLabel lblUser = new JLabel("Usuário: ");
    lblUser.setBounds(25, 50, 100, 30); 

    JLabel lblPass = new JLabel("Senha: ");
    lblPass.setBounds(25, 100, 100, 30); 

    frame.add(lblUser); 
    frame.add(lblPass);   

    JTextField txtUser = new JTextField();
    JPasswordField pssWord = new JPasswordField();  

    txtUser.setBounds(90, 50, 150, 30); 
    pssWord.setBounds(90, 100, 150, 30);

    frame.add(txtUser); 
    frame.add(pssWord); 
   
    JButton btnEntrar = new JButton("Entrar");  
    btnEntrar.setBounds(110, 150, 100, 30);
   
    JButton btnCadastar = new JButton("Cadastrar");  
    btnCadastar.setBounds(110, 200, 100, 30);
   
    JButton btnSair = new JButton("Sair");  
    btnSair.setBounds(110, 250, 100, 30);
   
    frame.add(btnEntrar);  
    frame.add(btnCadastar);  
    frame.add(btnSair);  

    btnEntrar.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent e) {
            CadastrarUsuForm ja = new CadastrarUsuForm();
            ja.setVisible(true);  
	}
    });
    
    btnCadastar.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent e) {
            /*CadastrarUsuForm ja = new CadastrarUsuForm();
            ja.setVisible(true); */ 
	}
    });
        
    btnSair.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent e) {
            System.exit(0); 
	}
    });
    
    frame.setLayout(null);  
    frame.setVisible(true);
  }
}