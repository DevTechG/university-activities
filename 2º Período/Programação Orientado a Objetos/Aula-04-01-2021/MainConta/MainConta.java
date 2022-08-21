public class MainConta {
    public static void main(String[] args) {
      Conta minhaConta;
      minhaConta=new Conta();
      
      minhaConta.titular="Ana";
      minhaConta.saldo=900.0;
      System.out.println("Saldo atual: "+minhaConta.saldo);
      
      minhaConta.saca(500.0);
      System.out.println("Saldo após sacar: "+minhaConta.saldo);
      
      minhaConta.deposita(750.0);
      System.out.println("Saldo após depositar: "+minhaConta.saldo);
      
      if (minhaConta.sacar(2000)){
          System.out.println("Saque possível de ser realizado, novo valor na conta:  "+minhaConta.saldo);
      } else {
          System.out.println("Não tem saldo suficiente para sacar o valor desejado");      
    }
      
    Conta C1;
    C1=new Conta();
    
    Conta C2;
    C2 = new Conta();
    
    C1.deposita(700);
    C2.deposita(500);
    
    Conta C3=C1;
    C3.deposita(300);
    System.out.println("Saldo na conta C1: "+C1.saldo);
    System.out.println("Saldo na conta C2: "+C2.saldo);
    System.out.println("Saldo na conta C3: "+C3.saldo);
    
    Conta Conta1;
    Conta1=new Conta();
    Conta Conta2;
    Conta2=new Conta();
    
    Conta1.titular="João";
    Conta1.saldo=300.0;
    Conta2.titular="Ana";
    Conta2.saldo=300.0;
    
    if(Conta1==Conta2){
       System.out.println("Contas iguais"); 
    } else {
       System.out.println("Contas diferentes");  
    }
    
        Conta1.transfere(Conta2, 200);
        System.out.println("Novo saldo da conta: "+Conta2.saldo);  
    


        
        Conta myConta=new Conta();
        Cliente	c=new Cliente();
        myConta.titula=c;
        
        Cliente ClientemyConta=myConta.titula;
        ClientemyConta.nome="Duke";
        System.out.println("Nome titular: "+ClientemyConta.nome);
        myConta.titula.nome="Manoel";
        System.out.println("Nome titular: "+myConta.titula.nome);
        
      Conta myC=new Conta();
      myC.saldo=10;
      double novoSaldo=-10;
      if (novoSaldo<0) {
          System.out.println("Não posso mudar para esse saldo");
      } else {
          myC.saldo=novoSaldo;
      }
    
      Cliente cli=new Cliente();
      cli.mudaCPF("12345");
      System.out.println("CPF: "+cli.pegaCPF());
    } 
}
    