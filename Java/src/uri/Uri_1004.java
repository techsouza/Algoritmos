package uri;

import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1004 {
 
    public static void main(String[] args) throws IOException {
 
        
        try (Scanner prod = new Scanner(System.in)) {
            int num1 = prod.nextInt();
            int num2 = prod.nextInt();
            
            System.out.println("PROD = " + num1 * num2);
        }
        
    }
 
}