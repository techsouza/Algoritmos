package uri;

import java.io.IOException;
import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1003 {
 
    public static void main(String[] args) throws IOException {
 
        int num1, num2, total;
        
        try (Scanner soma = new Scanner(System.in)) {
            num1 = soma.nextInt();
            num2 = soma.nextInt();
        }
        
        total = num1+num2;
        
        System.out.println("SOMA = " + total);

    }
 
}