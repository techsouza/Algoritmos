package uri;

import java.util.Scanner;

public class Uri_1060 {

    public static void main(String[] args) {

        int i, positivo = 0;
        double numero;
        try (Scanner read = new Scanner(System.in)) {
            for (i = 0; i < 6; i++) {
                {
                    numero = read.nextDouble();
                }

                if (numero > 0)
                    positivo++;

            }
        }
        System.out.println(positivo + " valores positivos");

    }

}
