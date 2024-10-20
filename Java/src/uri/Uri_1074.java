package uri;

import java.util.Scanner;

public class Uri_1074 {

    public static void main(String[] args) {

        int num = 0;
        int caso;

        try (Scanner read = new Scanner(System.in)) {
            caso = read.nextInt();

            for (; caso > 0; caso--) {
                num = read.nextInt();

                if (num == 0)
                    System.out.println("NULL");
                if (num % 2 != 0 && num < 0)
                    System.out.println("ODD NEGATIVE");
                if (num % 2 == 0 && num < 0)
                    System.out.println("EVEN NEGATIVE");
                if (num % 2 != 0 && num > 0)
                    System.out.println("ODD POSITIVE");
                if (num % 2 == 0 && num > 0)
                    System.out.println("EVEN POSITIVE");
            }
        }

    }
}
