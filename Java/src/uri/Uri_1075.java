package uri;

import java.util.Scanner;

public class Uri_1075 {

    public static void main(String[] args) {

        try (Scanner read = new Scanner(System.in)) {
            int num = read.nextInt();

            for (int i = 1; i <= 10000; i++) {

                if (i % num == 2)

                    System.out.println(i);

            }
        }

    }
}
