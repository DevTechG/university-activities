public final class Conta {
    private double saldo;
    
    public Conta (double saldo) {
        if (saldo>=0)
            this.saldo=saldo;
     } 
            
    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
        
    }
    
    public void credito(double dinheiro) {
        this.saldo+=dinheiro;
    }
    
    public void debito(double dinheiro) {
        this.saldo-=dinheiro;
    }    
}
