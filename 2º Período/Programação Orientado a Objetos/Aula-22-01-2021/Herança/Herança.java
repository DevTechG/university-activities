public class Herança {
    public static void main(String[] args) {
        Gerente_de_Vendas vendas= new Gerente_de_Vendas();
        vendas.setNome("João");
        vendas.setSalario(5500);
        System.out.println("Nome Gerente de Vendas: "+vendas.getNome());
        System.out.println("Bonificação do Gerente de Vendas: R$ "+vendas.Bonificacao());
        Gerente_de_Marketing marketing = new Gerente_de_Marketing();
        marketing.setNome("Maria");
        marketing.setSalario(5000);
        System.out.println("Nome Gerente de Marketing: "+marketing.getNome());
        System.out.println("Bonificação do Gerente de Marketing: R$ "+marketing.Bonificacao());
        Supervisor supervisor=new Supervisor();
        supervisor.setNome("Pedro");
        supervisor.setSalario(3000);
        System.out.println("Nome Supervisor: "+supervisor.getNome());
        System.out.println("Bonificação do Supervisor: R$ "+supervisor.Bonificacao());
        Vendedor vendedor=new Vendedor();
        vendedor.setNome("José");
        vendedor.setSalario(1500);
        System.out.println("Nome Vendedor: "+vendedor.getNome());
        System.out.println("Bonificação do Vendedor: R$ "+vendedor.Bonificacao());
        Diretor diretor = new Diretor();
        diretor.setNome("Ane");
        diretor.setSalario(2500);
        System.out.println("Nome Diretor: "+diretor.getNome());
        System.out.println("Bonificação Diretor: R$ "+diretor.Bonificacao());
    }
    
}
