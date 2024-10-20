package uri;

import java.util.Scanner;

public class Uri_1065 {

    public static void main(String[] args) {

        int n, numero, par;
        try (Scanner read = new Scanner(System.in)) {
            n = 5;
            par = 0;
            while (n > 0)
            {
                numero = read.nextInt();
                if (numero % 2 == 0)
                    par = par + 1;
                else
                    ;
                n = n - 1;
            }
        }
        System.out.println(par+" valores pares");
    }

}


