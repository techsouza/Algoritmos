package uri;

import java.io.IOException;
import java.util.Scanner;

public class Uri_1134 {
    public static void main(String[] args) throws IOException {

        int cliente, alcool = 0, gasolina = 0, diesel = 0;

        try (Scanner leia = new Scanner(System.in)) {
            OUTER: while (true) {
                cliente = leia.nextInt();
                switch (cliente) {
                    case 1:
                        alcool++;
                        break;
                    case 2:
                        gasolina++;
                        break;
                    case 3:
                        diesel++;
                        break;
                    case 4:
                        break OUTER;
                }
            }
        }

        System.out.printf("MUITO OBRIGADO\n");
        System.out.printf("Alcool: %d\n", alcool);
        System.out.printf("Gasolina: %d\n", gasolina);
        System.out.printf("Diesel: %d\n", diesel);

    }

}
