package view;

import static controller.Constante.*;
import controller.UsuarioController;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTable;
import javax.swing.JTextField;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import model.bean.Usuario;

class LoginForm extends JFrame{
    
    private JPanel contentPane;
    private JTextField txtUser;
    private JTextField pssWord;
    
    Usuario usuario = new Usuario();
    UsuarioController usuarioController = new UsuarioController();
    
    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
		try {
                    LoginForm frame = new LoginForm();
                    frame.setVisible(true);
		} catch (Exception e) {
                    e.printStackTrace();
		}
	}
    });
    }
    
   public LoginForm() {
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    JFrame frame = new JFrame();
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setTitle("Tela de login");
    frame.setSize(300, 300);
    frame.setLocation(5, 5);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    JLabel lblUser = new JLabel("Usuário: ");
    lblUser.setBounds(50,50, 100,30); 

    JLabel lblPass = new JLabel("Senha: ");
    lblPass.setBounds(50,100, 100,30); 

    frame.add(lblUser); 
    frame.add(lblPass);   

    JTextField txtUser = new JTextField();
    JPasswordField pssWord = new JPasswordField();  

    txtUser.setBounds(110,50, 100,30); 
    pssWord.setBounds(110,100, 100,30);

    frame.add(txtUser); 
    frame.add(pssWord); 

    JButton btnEntrar = new JButton("Entrar"); 
    btnEntrar.addActionListener(new ActionListener() {
        public void actionPerformed(ActionEvent e) {
            usuario.setUsuario(txtUser.getText());
             usuario.setUsuario(txtUser.getText());
             usuario.setSenha(pssWord.getText());
             //usuarioController.executa(usuario,SALVAR);
        }

    });
    btnEntrar.setBounds(100,150,100,30);


    JButton btnCadastar = new JButton("Cadastrar");  
    btnCadastar.setBounds(100, 200, 100, 30);

    frame.add(btnEntrar);  
    frame.add(btnCadastar);     

    frame.setSize(300,300);  
    frame.setLayout(null);  
    frame.setVisible(true); 
    }
}

