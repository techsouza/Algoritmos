package uri;

import java.util.Scanner;

public class Uri_1066 {
    public static void main(String[] args) {
        int par = 0;
        int impar = 0;
        int negativo = 0;
        int positivo = 0;
        int numero;
        try (Scanner read = new Scanner(System.in)) {
            for (int i = 0; i < 5; i++) {
                numero = read.nextInt();
                if (numero % 2 == 0)
                    par = par + 1;
                if (numero % 2 != 0)
                    impar = impar + 1;
                if (numero > 0)
                    positivo = positivo + 1;
                if (numero < 0)
                    negativo = negativo + 1;
            }
        }

        System.out.println(par + " valor(es) par(es)");
        System.out.println(impar + " valor(es) impar(es)");
        System.out.println(positivo + " valor(es) positivo(s)");
        System.out.println(negativo + " valor(es) negativo(s)");
    }

}
