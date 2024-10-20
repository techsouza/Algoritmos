package uri;

import java.util.Scanner;

public class Uri_3302 {

    public static void main(String[] args) {
        try (Scanner leia = new Scanner(System.in)) {
            int caso = leia.nextInt();

            for(int i=1; i <= caso; i++)
            {
                int resposta = leia.nextInt();

                System.out.println("resposta "+i+": "+resposta);
            }
        }
        
    }
    
}
