package uri;

import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT:
 * O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute
 * El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1073 {

    public static void main(String[] args) throws IOException {

        try (Scanner read = new Scanner(System.in)) {
            int numero, pot, n;
            numero = read.nextInt();
            n = 2;
            while (numero > 1) {
                pot = n * n;
                // printf("%d^2 = %d\n", n, pot);
                // cout << n << "^2 = " << pot << "\n";
                System.out.println(n + "^2 =" + pot);
                n = n + 2;
                numero = numero - 2;
            }
        }
    }

}
