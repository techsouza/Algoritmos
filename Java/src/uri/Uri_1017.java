package uri;
import java.util.Scanner;
/**
 *
 * @author w.souza
 */
public class Uri_1017
 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        int tempo_gasto, velocidade_media;
        double combustivel;
        
        try (Scanner leia = new Scanner(System.in)) {
            tempo_gasto = leia.nextInt();
            velocidade_media = leia.nextInt();
        }
        
        combustivel = (velocidade_media / 12.0)*tempo_gasto;
        
        System.out.printf("%.3f\n", combustivel);
    }
 
}