package uri;

import java.util.Scanner;

public class Uri_1064 {

    public static void main(String[] args) {

        int i, positivo = 0;
        double numero;
        double soma = 0;
        try (Scanner read = new Scanner(System.in)) {
            for (i = 0; i < 6; i++) {
                numero = read.nextDouble();

                if (numero > 0) {
                    positivo++;
                    soma += numero;
                }

            }
        }
        soma = soma / positivo;
        System.out.println(positivo + " valores positivos");
        System.out.printf("%.1f\n", soma);

    }

}
