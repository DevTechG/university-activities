package jdbc;

public class Produtos {
    int CodProd;
    String Descricao;
    String Unidade;
    String CodigoBarra;
    String Referencia;

    public int getCodProd() {
        return CodProd;
    }

    public void setCodProd(int CodProd) {
        this.CodProd = CodProd;
    }

    public String getDescricao() {
        return Descricao;
    }

    public void setDescricao(String Descricao) {
        this.Descricao = Descricao;
    }

    public String getUnidade() {
        return Unidade;
    }

    public void setUnidade(String Unidade) {
        this.Unidade = Unidade;
    }

    public String getCodigoBarra() {
        return CodigoBarra;
    }

    public void setCodigoBarra(String CodigoBarra) {
        this.CodigoBarra = CodigoBarra;
    }

    public String getReferencia() {
        return Referencia;
    }

    public void setReferencia(String Referencia) {
        this.Referencia = Referencia;
    }
    
}
