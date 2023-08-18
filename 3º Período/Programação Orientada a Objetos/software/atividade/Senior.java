package atividade;

public class Senior extends Programador {

    public Senior(String nome, int horas, double valor) {
        super(nome, horas, valor);
//	super.(nome) = nome;
//	super.horas = horas;
//	super.valor = valor;
    }

    public int horasBonus() {
        return Integer.valueOf(super.horas / 20) * 2;
    }

    @Override
    public double salarioFinal() {

        return (horasBonus() + super.horas) * super.valor;
    }

    @Override
    public String toString() {
        return "Nome :" + super.getNome() + "\nHoras : " + super.getHoras()
                + "\nValor " + super.getValor() + "\nsalario total : " + salarioFinal();
    }
}
