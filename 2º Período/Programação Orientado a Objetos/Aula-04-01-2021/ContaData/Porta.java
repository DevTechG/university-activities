class Porta {
    boolean aberta;
    String cor;
    int dimensaoX;
    int dimensaoY;
    int dimensaoZ;
    
    void  abre() {
        this.aberta=true;
        System.out.println("A porta está averta");
    }
    
    void fecha() {
        this.aberta=false;
        System.out.println("A porta está fechada");
    }
    void pinta (String S) {
        this.cor=S;
    }
    boolean estaAberta() {
        if (aberta==true) {
            System.out.println("Está aberta");
            return true;
        } else {
            System.out.println("Está fechada");
            return false;
        }
    }
}

