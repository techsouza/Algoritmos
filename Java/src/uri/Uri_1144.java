package uri;

import java.util.*;

public class Uri_1144 {

    public static void main(String[] args) {

        int n;
        try (Scanner leia = new Scanner(System.in)) {
            n = leia.nextInt();
        }

        for (int i = 1; i <= n; i++) {
            System.out.println(i + " " + i * i + " " + i * i * i);
            System.out.println(i + " " + (i * i + 1) + " " + (i * i * i + 1));
        }
    }

}
