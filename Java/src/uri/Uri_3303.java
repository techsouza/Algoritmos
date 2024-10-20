package uri;
import java.util.*;


public class Uri_3303 {

    public static void main(String[] args) {
        
        try (Scanner leia = new Scanner(System.in)) {
            String palavra = leia.nextLine();

            int tamanho = palavra.length();

            if(tamanho >= 10)
            {
                System.out.println("palavrao");
            }
            else
            {
                System.out.println("palavrinha");
            }
        }

    }
    
}
