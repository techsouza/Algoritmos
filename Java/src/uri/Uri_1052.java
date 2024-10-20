package uri;

import java.util.Scanner;

public class Uri_1052 {

    public static void main(String[] args) {

        String[] meses = { "January", "February", "March", "April",
                "May", "June", "July", "August",
                "September", "October", "November", "December"
        };

        try (Scanner read = new Scanner(System.in)) {
            int mes = read.nextInt();

            System.out.println(meses[mes - 1]);
        }

    }

}
