package uri;
import java.util.*;

public class Uri_1045 {
    
    public static void main(String[] args){
        try (Scanner read = new Scanner(System.in)) {
            double a = read.nextDouble();
            double b = read.nextDouble();
            double c = read.nextDouble();

            if(a >= b+c || b >= a+c || c >= b+c)
            {
                System.out.println("NAO FORMA TRIANGULO");
            }
            else if(a*a == b*b+c*c || b*b == a*a+c*c || c*c == b*b+a*a)
            {
                System.out.println("TRIANGULO RETANGULO"); 
            }
            else if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > b*b+a*a)
            {
                System.out.println("TRIANGULO OBTUSANGULO"); 
            }
            else if(a*a < b*b+c*c || b*b < a*a+c*c || c*c < b*b+a*a)
            {
                System.out.println("TRIANGULO ACUTANGULO"); 
            }
            if(a==b && b==c )
            {
                System.out.println("TRIANGULO EQUILATERO"); 
            }
            if(a==b && b!=c || c != a && c == b || c == a && b != a)
            {
                System.out.println("TRIANGULO ISOSCELES"); 
            }
        }
    }
}
