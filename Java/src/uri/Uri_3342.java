package uri;

import java.util.Scanner;

public class Uri_3342 {

    public static void main(String[] args) {

        try (Scanner leitor = new Scanner(System.in)) {
            int tab;

            tab = leitor.nextInt();
        

        if (tab % 2 == 0) {
            tab = tab * tab;
            System.out.printf("%d casas brancas e %d casas pretas\n", tab / 2, tab / 2);
        } else {
            tab = tab * tab;
            tab = tab / 2;
            System.out.printf("%d casas brancas e %d casas pretas\n", tab + 1, tab);
        }

    }

    }

}
