package uri;
import java.util.*;

public class Uri_1142 {

    public static void main(String[] args) {

        try (Scanner leia = new Scanner(System.in)) {
            int n;
            n = leia.nextInt();
            int a=1, b=2, c=3;
            while(n>0)
            {
                System.out.printf(a+" "+b+" "+c+" PUM\n");
                c+=2;
                a = c;
                b = c;
                b+=1;
                c+=2;
                n--;

            }
        }

        
    }
    
}
