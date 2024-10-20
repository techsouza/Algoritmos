package uri;
import java.util.*;

public class Uri_1038 {

    public static void main(String[] args){
        try (Scanner read = new Scanner(System.in)) {
            double codigo[] = {4.00, 4.50, 5.00, 2.00, 1.50};

            int a = read.nextInt();
            int b = read.nextInt();

            a = a-1;

            System.out.printf("Total: R$ %.2f", codigo[a]*b );
        }

    }
    
}
