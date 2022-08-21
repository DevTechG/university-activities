import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

public class Calculadora_java {
    
    public static class Calculadora {
    public float soma(float num1, float num2) {
        return num1 + num2;
    }

    public float soma(float num1, float num2, float num3) {
        return num1 + num2 + num3;
    }

    public float sub(float num1, float num2) {
        return num1 - num2;
    }

    public float sub(float num1, float num2, float num3) {
        return num1 - num2 - num3;
    }

    public float mult(float num1, float num2) {
        return num1 * num2;
    }

    public float mult(float num1, float num2, float num3) {
        return num1 * num2 * num3;
    }

    public float div(float num1, float num2) {
        return num1 / num2;
    }

    public float div(float num1, float num2, float num3) {
        return num1 / num2 / num3;
    }

    public void menu() {
        System.out.println("+: Somar");
        System.out.println("-: Subtrair");
        System.out.println("*: Multiplicacao");
        System.out.println("/: Divisao");
        System.out.println("x: Sair");
        System.out.println("Digite os números, seguido da operação que deseja realizar");
    }
}

    
   public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        List<Float> numList = new ArrayList<>(); 
        String val;
        Calculadora calc = new Calculadora();
        calc.menu();
        val = in.nextLine();
        while (!val.equals("x")) {
            if (!isNumeric(val) && !val.equals("x")) {
                conta(numList, val);
                numList.clear();
            }
            else
                numList.add(Float.parseFloat(val));
            val = in.nextLine();
        }
        System.out.println("Calculadora finalizada");
    }

    public static boolean isNumeric(String str) {
        if (str == null || str.length() == 0) {
            return false;
        }
        try {
            Double.parseDouble(str);
            return true;
        } catch (NumberFormatException e) {
            return false;
        }
    }

    public static void conta(List<Float> numList, String val) {
        Calculadora calc = new Calculadora();
        if (numList.size() == 3) {
            if (val.equals("+")) {
                System.out.println(Float.toString(calc.soma(numList.get(0), numList.get(1), numList.get(2))));
            } else if (val.equals("-")) {
                System.out.println(Float.toString(calc.sub(numList.get(0), numList.get(1), numList.get(2))));
            } else if (val.equals("*")) {
                System.out.println(Float.toString(calc.mult(numList.get(0), numList.get(1), numList.get(2))));
            }
            else {
                System.out.println(Float.toString(calc.div(numList.get(0), numList.get(1), numList.get(2))));
            }
        } else {
            if (val.equals("+")) {
                System.out.println(Float.toString(calc.soma(numList.get(0), numList.get(1))));
            } else if (val.equals("-")) {
                System.out.println(Float.toString(calc.sub(numList.get(0), numList.get(1))));
            } else if (val.equals("*")) {
                System.out.println(Float.toString(calc.mult(numList.get(0), numList.get(1))));
            }
            else {
                System.out.println(Float.toString(calc.div(numList.get(0), numList.get(1))));
            }
        }
        calc.menu();
    }
}

