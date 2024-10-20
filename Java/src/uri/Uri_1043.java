package uri;
import java.io.IOException;
import java.util.*;

public class Uri_1043 {

    public static void main(String[] args) throws IOException {
        
        try (Scanner read = new Scanner(System.in)) {
            double x = read.nextDouble();
            double y = read.nextDouble();
            double z = read.nextDouble();


            if(x+y > z && x+z > y && z+y > x)
            {
                System.out.printf("Perimetro = %.1f", x+y+z);
                System.out.println();
            }
            else
            {
                System.out.printf("Area = %.1f", ((x+y)*z)/2);
                System.out.println();
            }
        }


        

    }
    
}
