public class OrdenarThread2{
    private List lsVet;

    public OrdenarThread2() {
        lsVet = new ArrayList();
        preencher();
    }
    public void preencher() {
        Thread tVet[] = new Thread[100];
        for(int i = 0; i < tVet.length; ++i) {
            Thread t = new Thread(new Runnable() {
                @Override
                public void run() {
                    for(int j = 0; j < 100; ++j) {
                        double vet[] = new double[2000];
                        lsVet.add(vet);
                        atribuirValores(vet);
                        ordenar(vet);
                    }
                }
            });
            t.start();
            tVet[i] = t;
        }
        for(int i = 0; i < tVet.length; ++i) {
            try {
                tVet[i].join();
            } catch (InterruptedException ex) {
                Logger.getLogger(OrdenarThread2.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }

    public void atribuirValores(double vet[]) {
        Random rand = new Random();
        for(int i = 0; i < vet.length; ++i) {
            vet[i] = rand.nextDouble();
        }
    }

    public void mostrar() {
        double vet[];
        for(int i = 0; i < lsVet.size(); ++i) {
            vet = (double[])lsVet.get(i);
            System.out.println("Pos " + i + " = " + vet[0]);
        }
    }

    public void ordenar(double vet[]) {
        int posMaior;
        double maior;
        double aux;
        for(int i = 0; i < vet.length; ++i) {
            posMaior = 0;
            maior = vet[0];
            for(int j = 1; j < vet.length - i - 1; ++j) {
                if(vet[j] > maior) {
                    posMaior = j;
                    maior = vet[j];
                }
            }
            aux = vet[vet.length - i - 1];
            vet[vet.length - i - 1] = maior;
            vet[posMaior] = aux;
        }
    }

    public static void main(String args[]) {
        OrdenarThread2 ordenar = new OrdenarThread2();
        ordenar.mostrar();
        System.out.println("Classe ordenarThread2");
    }
}
