package uri;

import java.io.IOException;
import java.util.Scanner;


 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1016 {
 
    public static void main(String[] args) throws IOException {
 
        int total = 0;
        try (Scanner leia = new Scanner(System.in)) {
            int a = leia.nextInt();
            
            total = a * 2;
        }
        
        System.out.println(total+" minutos");
    }
 
}