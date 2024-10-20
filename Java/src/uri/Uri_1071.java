package uri;

import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT:
 * O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute
 * El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1071 {

    public static void main(String[] args) throws IOException {

        int a, b, aux, soma = 0, i;

        try (Scanner leia = new Scanner(System.in)) {
            a = leia.nextInt();
            b = leia.nextInt();
        }

        if (a > b) {
            aux = a;
            a = b;
            b = aux;

        }

        for (i = a + 1; i < b; i++) {
            if (i % 2 == 1 || i % 2 == -1) {
                soma += +i;
            } else
                ;

        }
        System.out.println("" + soma);

    }

}