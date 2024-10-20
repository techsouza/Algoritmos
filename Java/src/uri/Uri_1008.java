package uri;

import java.io.IOException;
import java.util.Scanner; 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Uri_1008 {
 
    public static void main(String[] args) throws IOException {
 
        int number, horas;
        float valor, total;
        
        try (Scanner salario = new Scanner(System.in)) {
            number = salario.nextInt();
            horas = salario.nextInt();
            valor = salario.nextFloat();
        }
        
        total = valor*horas;
        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n", number, total);
    }
 
}