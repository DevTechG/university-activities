public class FabricaCarros {
    public static void main(String[] args) {
        String gol="Gol";
        Carro meuCarro;
        meuCarro=new Carro(gol);
        meuCarro.cor="Preto";
        meuCarro.velocidadeAtual=0;
        meuCarro.velocidadeMax=190;
        meuCarro.motor.potencia=155;
        meuCarro.motor.tipo="Flex";
        
        meuCarro.liga();
        meuCarro.acelera(30);
        System.out.println(meuCarro.velocidadeAtual);
        System.out.println("Modelo do carro: "+meuCarro.modelo);
        System.out.println("Cor do carro: "+meuCarro.cor);
        System.out.println("Velocidade máxima do modelo: "+meuCarro.velocidadeMax);
        System.out.println("Potencia do motor: "+meuCarro.motor.potencia);        
        System.out.println("Tipo do motor: "+meuCarro.motor.tipo);

    }
    
}
