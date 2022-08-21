public class Cliente {
    String nome;
    String sobrenome;
    private String cpf;
    private int idade;
    public void mudaCPF(String cpf) {
        if (this.idade<=60) {
        validaCPF(cpf);
        }
        this.cpf=cpf;
    }
    private void validaCPF(String cpf) {
        if (cpf==null) {
            this.cpf=cpf;
        }
    }
    public String pegaCPF() {
        return this.cpf;
    }
    Cliente() {
        System.out.println("Construindo um cliente.");
    }
    }

