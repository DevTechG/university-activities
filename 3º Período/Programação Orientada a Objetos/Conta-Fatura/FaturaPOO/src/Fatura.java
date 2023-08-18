public class Fatura {
    private String numero;
    private String descricao;
    private int qtde;
    private double preco;

    public Fatura(String numero, String descricao, int qtde, double preco) {
        this.numero = numero;
        this.descricao = descricao;
        this.qtde = qtde;
        if (qtde<=0) 
            this.qtde = 0;
       this.preco = preco;
       if (preco<=0) 
            this.preco=0.0;
    }

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public int getQtde() {
        return qtde;
    }

    public void setQtde(int qtde) {
        this.qtde = qtde;
        if (qtde<=0) 
            this.qtde = 0;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
       this.preco = preco;
       if (preco<=0) 
            this.preco=0.0;
    }
    
    public double calculaFatura() {
        return preco*qtde;
    }
}