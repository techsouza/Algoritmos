package uri;
import java.util.Scanner;

public class Uri_1012 {
    public static void main(String[] args){
 
        
        try (Scanner leia = new Scanner(System.in)) {
            double a = leia.nextDouble();
            double b = leia.nextDouble();
            double c = leia.nextDouble();
            


            System.out.printf("TRIANGULO: %.3f\n", (a * c)/2);
            System.out.printf("CIRCULO: %.3f\n", 3.14159 * (c * c));
            System.out.printf("TRAPEZIO: %.3f\n", (c * (a + b)) / 2);
            System.out.printf("QUADRADO: %.3f\n", b * b);
            System.out.printf("RETANGULO: %.3f\n", a * b);
        }
 
    }
}
