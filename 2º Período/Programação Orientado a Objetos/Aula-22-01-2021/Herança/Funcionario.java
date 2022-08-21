public class Funcionario {
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
        
    protected String nome;
    protected double salario;    
    
    public double Bonificacao() {
        return this.salario*0.1;
    }
}
