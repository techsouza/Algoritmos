package uri;
import java.io.IOException;
import java.util.Scanner;

public class Uri_1132 {

    public static void main(String[] args) throws IOException {

        try (Scanner leitor = new Scanner(System.in)) {
            int x;
            int y;
            int cont=0;
            int aux = 0;
   
            x = leitor.nextInt();
            y = leitor.nextInt();;
            
            if (x > y)
            {
                aux = x;
                x = y;
                y = aux;
            }
   
            while(x <=y)
            {
                if(x%13 != 0)
                {
                    cont = cont + x;
                    x++;
                }
                else
                    x++;
   
            }
   
            System.out.println(cont);
        }


    }
    
}
