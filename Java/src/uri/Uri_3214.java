package uri;

import java.util.Scanner;

public class Uri_3214 {

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int e = read.nextInt();
            int f = read.nextInt();
            int c = read.nextInt();

            int total = e + f;
            int garrafas = 0;

            while (c <= total) {
                total = total - c;
                total++;
                garrafas++;
            }

            System.out.println(garrafas);
        }

    }

}
