package atividade;

public class Programador {

    String nome;
    int horas;
    double valor;

    public Programador(String nome, int horas, double valor) {
        this.nome = nome;
        this.horas = horas;
        this.valor = valor;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setHoras(int horas) {
        this.horas = horas;
    }

    public int getHoras() {
        return horas;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public double getValor() {
        return valor;
    }

    public double salarioFinal() {
        return horas * valor;
    }

    @Override
    public String toString() {
        return "Nome :" + getNome() + "\nHoras : " + getHoras()
                + "\nValor " + getValor() + "\nsalario total : " + salarioFinal();
    }
}
