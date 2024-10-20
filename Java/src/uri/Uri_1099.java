package uri;

import java.util.*;

public class Uri_1099 {

    public static void main(String[] args) {

        try (Scanner leia = new Scanner(System.in)) {
            int caso;
            int x, y;
            int aux, i, sum;

            caso = leia.nextInt();

            for (; caso > 0; caso--) {
                sum = 0;
                x = leia.nextInt();
                y = leia.nextInt();

                if (x > y) {
                    aux = y;
                    y = x;
                    x = aux;
                }
                i = x + 1;
                for (; i < y; i++) {
                    if (i % 2 == 1 || i % 2 == -1)
                        sum += i;
                }

                System.out.println(sum);

            }
        }

    }

}
