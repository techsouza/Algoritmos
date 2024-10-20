package uri;

import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1015 {
 
    public static void main(String[] args) throws IOException {
 
        double x1, x2,y1,y2, distancia;
        
        try (Scanner leia = new Scanner(System.in)) {
            x1 = leia.nextDouble();
            y1 = leia.nextDouble();
            x2 = leia.nextDouble();
            y2 = leia.nextDouble();
        }
        distancia = Math.sqrt(Math.pow((x2-x1), 2)+Math.pow((y2-y1), 2));
        System.out.printf("%.4f\n", distancia);
    }
 
}