package uri;

import java.util.*;

public class Uri_1145 {

    public static void main(String[] args) {
        int x;
        int y;
        try (Scanner leia = new Scanner(System.in)) {
            x = leia.nextInt();
            y = leia.nextInt();
        }

        int n = 1;

        for (int i = 1; i <= y; i++) {
            if (n == x) {
                System.out.println(i);
                n = 1;
            } else {
                System.out.print(i + " ");
                n++;
            }
        }

    }

}
