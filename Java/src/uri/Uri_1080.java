package uri;

import java.util.Scanner;

public class Uri_1080 {

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int n, maior = 0, posicao = 0;

            for (int i = 1; i < 101; i++) {

                n = read.nextInt();

                if (n > maior) {
                    maior = n;
                    posicao = i;
                }

            }

            System.out.println(maior);
            System.out.println(posicao);

        }

    }
}