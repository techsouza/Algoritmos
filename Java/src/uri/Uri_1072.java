package uri;

import java.io.IOException;
import java.util.Scanner;

/**
 * IMPORTANT:
 * O nome da classe deve ser "Main" para que a sua solução execute
 * Class name must be "Main" for your solution to execute
 * El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1072 {

    public static void main(String[] args) throws IOException {

        try (Scanner read = new Scanner(System.in)) {
            int caso;
            int dentro = 0;
            int fora = 0;
            int num = 0;

            caso = read.nextInt();


            for(; caso>0 ; caso--)
            {
                num = read.nextInt();

                if(num >= 10 && num <= 20)
                    dentro+=1;
                else
                    fora+=1;
            }

            System.out.println(dentro+ " in");
            System.out.println(fora+ " out");
        }
    }

}
