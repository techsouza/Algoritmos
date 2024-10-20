package uri;

import java.util.*;


public class Uri_1035{

    public static void main(String[] args){
        try (Scanner leia = new Scanner(System.in)) {
            int a = leia.nextInt();
            int b = leia.nextInt();
            int c = leia.nextInt();
            int d = leia.nextInt();

            if((a%2==0) && (b>c) && (c+d > a+b) && (d>a) && (c > 0) && (d > 0))
            System.out.println("Valores aceitos");
   else
            System.out.println("Valores nao aceitos");
        }
    }
}