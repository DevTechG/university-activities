    public class Conta {
    int num;
    String titular;
    double saldo;  
    Cliente titula;
    private double lmite;
    
    void saca(double valor) {
        double novoSaldo=this.saldo-valor;
        this.saldo=novoSaldo;
    }
    
    void deposita(double valor) {
        this.saldo+=valor;
    }
    
    boolean sacar(double valor){
        if (this.saldo<valor) {
            return false;
        } else {
            this.saldo-=valor;
            return true;
        }
    }
    
    boolean transfere (Conta destino, double valor) {
        boolean retirou=this.sacar(valor);
        if (retirou==false) {
            return false;
        } else {
           destino.deposita(valor);
           return true;
    }
    }
    
    public double getSaldo () {
        return this.saldo+this.lmite;
    }
}


