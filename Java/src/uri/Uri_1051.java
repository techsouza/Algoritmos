package uri;

import java.util.*;

public class Uri_1051{

    public static void main(String[] args){

        double ir = 0;
        try (Scanner leia = new Scanner(System.in)) {
            double valor = leia.nextDouble();
              

                
            if (valor > 4500)
            {
                ir += (valor - 4500) * 0.28;
                valor = 4500;

            }
            if (valor > 3000)
            {
                ir += (valor - 3000) * 0.18;
                valor = 3000;

            }
            if (valor > 2000)
            {
                ir += (valor - 2000) * 0.08;
            }
        }
        if (ir == 0)
        {
            System.out.println("Isento");
        }
        else
            System.out.printf("R$ %.2f\n", ir);



    }
}