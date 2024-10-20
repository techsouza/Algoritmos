package uri;
import java.io.IOException;
import java.util.*;

public class Uri_1013 {

    public static void main(String[] args) throws IOException {
 

        try (Scanner leia = new Scanner(System.in)) {
            int a = leia.nextInt();
            int b = leia.nextInt();
            int c = leia.nextInt();
            
            if(a > b && a > c)
                    System.out.println(a+" eh o maior" );
            if(b > c && b > a)
                    System.out.println(b+" eh o maior" );
            if(c > a && c > b)
                   System.out.println(c+" eh o maior" );
        }
 
    }
    
}
