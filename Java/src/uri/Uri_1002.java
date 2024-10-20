package uri;

import java.io.IOException;
import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1002 {
 
    public static void main(String[] args) throws IOException {
 
        try (Scanner leia = new Scanner(System.in)) {
            double area, raio;
            
            raio = leia.nextDouble();
            
            area = 3.14159 * raio * raio;
            System.out.printf("A=%.4f\n", area);
        }
    }
 
}