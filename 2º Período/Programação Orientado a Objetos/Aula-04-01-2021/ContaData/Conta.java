class Conta {
    String titular;
    int numero;
    String agencia;
    double saldo;  
    String Data_abertura;
    Data dataaAbertura=new Data();
    
void saca(double valor) {
    this.saldo-=valor;
}
    
void deposita(double valor) {
    this.saldo+=valor;
}

double calculaRendimento() {
    return this.saldo*0.1;
    }
void recuperaDadosParaImpressao(){
    System.out.println("Nome titular:"+this.titular);
    System.out.println("Número da conta: "+this.numero);
    System.out.println("Agência da conta: "+this.agencia);
    System.out.println("Data abertura conta: "+this.Data_abertura);
}

String recuperaDadosParaImpressa() {
    String dados="\nTitular: "+this.titular;
    dados=dados+"\n"+this.dataaAbertura.dia+"/"+this.dataaAbertura.mes+"/"+this.dataaAbertura.ano;
    return dados;
}
}
