package uri;

import java.util.Scanner;

public class Uri_1078 {

    public static void main(String[] args) {

        try (Scanner read = new Scanner(System.in)) {
            int num = read.nextInt();

            for (int i = 1; i <= 10; i++) {

                System.out.println(i + " x "+ num + " = "+i*num);

            }
        }

    }
}
