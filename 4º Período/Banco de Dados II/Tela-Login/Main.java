/*
import javax.swing.*;

class Main {
  public static void main(String[] args) {
    JTextField  field = new JTextField(20);
    JPasswordField field2 = new JPasswordField(20);
    
    JFrame frame = new JFrame();
    frame.setTitle("Tela de logim");
    frame.setSize(300, 300);
    frame.setLocation(5, 5);
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

    /*JLabel user = new JLabel("Usuário:");
    JLabel pass = new JLabel("Senha:");
    frame.getContentPane().add(user);
    frame.getContentPane().add(pass);
    JLabel usernameLabel = new JLabel("Username: ");
    JLabel passwordLabel = new JLabel("Password: ");
    JTextField usernameField = new JTextField(20);
    JPasswordField passwordField = new JPasswordField(20);
    //frame.show();

  }
}

*/

import javax.swing.*;

class Main {
  public static void main(String[] args) {
    
   JFrame frame = new JFrame();
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
   JButton btnEnter=new JButton("Entrar");  
   btnEnter.setBounds(100,150,100,30);  
   frame.add(btnEnter);     
   frame.setSize(300,300);  
   frame.setLayout(null);  
   frame.setVisible(true); 
   /*setLayout(new SpringLayout());
    Container c = getContentPane();
    setTitle("Cadastro de Médico");
    c.add(lblUser);
    c.add(lblPass);
    c.add(txtUser);
    c.add(pssWord);
    setVisible(true);
    pack();*/
  }
}

    