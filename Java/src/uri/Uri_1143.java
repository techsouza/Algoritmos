package uri;

import java.util.*;

public class Uri_1143 {

    public static void main(String[] args) {

        int n;
        try (Scanner leia = new Scanner(System.in)) {
            n = leia.nextInt();
        }
        
        for (int i = 1; i <= n; i++) {
            System.out.println(i + " " + i * i + " " + i * i * i);
        }
    }

}
