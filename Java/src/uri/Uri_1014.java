package uri;

import java.io.IOException;
import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1014 {
 
    public static void main(String[] args) throws IOException {
 
        int km;
        double litro, consumo;
        
        try (Scanner total = new Scanner(System.in)) {
            km = total.nextInt();
            litro = total.nextDouble();
        }
        
        consumo = km/litro;
        
        System.out.printf("%.3f km/l\n", consumo);

 
    }
 
}