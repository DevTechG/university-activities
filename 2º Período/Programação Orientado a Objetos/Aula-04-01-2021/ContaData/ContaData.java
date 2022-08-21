public class ContaData {
    public static void main(String[] args) {
        Conta conta=new Conta();
        conta.titular="Pedro";
        conta.numero=4321;
        conta.agencia="56789-0";
        conta.saldo=150.0;
        conta.Data_abertura="01/01/2000";
        conta.deposita(50.0);
        System.out.println("Saldo atual: "+conta.saldo);
        System.out.println("Rendimento mensal: "+conta.calculaRendimento());
        conta.recuperaDadosParaImpressao();
        
        Conta c1=new Conta();
        c1.titular="Ana";
        c1.saldo=10.0;
        Conta c2=new Conta();
        c2.titular="Ana";
        c2.saldo=10.0;
        if (c1==c2) {
           System.out.println("São iguais");
    } else {
            System.out.println("São diferentes");
        }
        
        Conta conta2;
        Conta conta1=new Conta();
        conta1.titular="Joaquim";
        conta1.saldo=250;
        conta2=conta1;
        if (conta1==conta2) {
           System.out.println("Iguais");
    } else {
            System.out.println("Diferentes");
        }
        Conta myconta=new Conta();
        myconta.titular="Bia";
        myconta.numero=1234;
        myconta.agencia="56789-0";
        myconta.saldo=1500.0;
        myconta.dataaAbertura.ano=2010;
        myconta.dataaAbertura.dia=10;
        myconta.dataaAbertura.mes=10;  
        System.out.println(myconta.recuperaDadosParaImpressa());

    Pessoa pessoa=new Pessoa ();
    pessoa.nome="André";
    pessoa.idade=11;
    System.out.println("\nIdade: "+pessoa.idade);
    pessoa.fazAniversario();
    System.out.println("Idade: "+pessoa.idade);
    pessoa.fazAniversario();
    System.out.println("Idade: "+pessoa.idade);
    
    
    
    Porta porta=new Porta();
    porta.aberta=false;
    porta.abre();
    porta.pinta("Azul");
    System.out.println("Cor da porta: "+porta.cor);
    porta.fecha();
    porta.estaAberta();
   }
}

