package uri;

import java.util.Scanner;

public class Uri_3224 {

    public static void main(String[] args) {

        try (Scanner read = new Scanner(System.in)) {
            String jon;
            String medico;

            jon = read.nextLine();
            medico = read.nextLine();

            int result = jon.compareTo(medico);
            System.out.println(result);

            if(result >= 0)
            {
                System.out.println("go");

            }
            else
                System.out.println("no");
        }

    }

}
