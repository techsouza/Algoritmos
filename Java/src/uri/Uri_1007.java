package uri;

import java.io.IOException;
import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1007 {
 
    public static void main(String[] args) throws IOException {
 
    int a, b, c, d, diferenca;
        
        try (Scanner total = new Scanner(System.in)) {
            a = total.nextInt();
            b = total.nextInt();
            c = total.nextInt();
            d = total.nextInt();
        }
        
        diferenca = ((a * b) - (c * d));
        
        System.out.println("DIFERENCA = " + diferenca);
    }
 
}