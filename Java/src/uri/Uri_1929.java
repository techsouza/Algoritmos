package uri;

import java.util.Scanner;

public class Uri_1929 {

    public static void main(String[] args) {

        try (Scanner read = new Scanner(System.in)) {
            int a = read.nextInt();
            int b = read.nextInt();
            int c = read.nextInt();
            int d = read.nextInt();

            if (a + b > c && a + c > b && b + c > a)
                 System.out.println("S");
            else if (b + c > d && b + d > c && c + d > b)
                 System.out.println("S");
            else if (a + c > d && a + d > c && c + d > a)
                 System.out.println("S");
            else if (a + b > d && b + d > a && a + d > b)
                 System.out.println("S");
            else
                 System.out.println("N");

        }

    }

}
