package uri;
import java.io.IOException;
import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1011 {
 
    public static void main(String[] args) throws IOException {
 
        
        
        try (Scanner leia = new Scanner(System.in)) {
            double raio = leia.nextDouble();
            
            System.out.printf("VOLUME = %.3f\n", (4.0/3)*3.14159*(raio*raio*raio));
        }
    }
 
}