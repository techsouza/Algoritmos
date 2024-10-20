package uri;

import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1006 {
 
    public static void main(String[] args){

        try (Scanner leia = new Scanner(System.in)) {
            double a = leia.nextDouble();
            double b = leia.nextDouble();
            double c = leia.nextDouble();
            
            double media;
            
            media = ((a*2) + (b*3) + (c*5))/10;
            
            System.out.printf("MEDIA = %.1f\n", media);
        }
    }
 
}