class Carro {
    String cor;
    String modelo;
    double velocidadeAtual;
    double velocidadeMax;
    Motor motor=new Motor();
    
    void liga() {
        System.out.println("O carro está ligado");
    }
    
    void acelera (double quantidade) {
        this.velocidadeAtual+=quantidade;
    }
    
    int pegaMarcha (){
      if (this.velocidadeAtual<0) {
          return -1;
      }  else if (this.velocidadeAtual<40){
          return 1;
      } else if (this.velocidadeAtual<80){
          return 2;
      } else {
          return 3;
      }
    }
    
    Carro(String modelo) {
        this.modelo=modelo;
    }
}
