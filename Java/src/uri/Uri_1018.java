package uri;
import java.util.Scanner;
/**
 *
 * @author w.souza
 */
public class Uri_1018 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int cedula, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0, nota1, cedula1;
        
        try (Scanner leia = new Scanner(System.in)) {
            cedula = leia.nextInt();
        }
        
        cedula1 = cedula;
        if(cedula >= 100)
        {
            nota100 = cedula/100;
            cedula = cedula%100;
        }
        if(cedula >= 50 && cedula <=99)
        {
            nota50 = cedula/50;
            cedula = cedula%50;
        }
        if(cedula >= 20 && cedula <=49)
        {
            nota20 = cedula/20;
            cedula = cedula%20;
        }
        if(cedula >= 10 && cedula <=19)
        {
            nota10 = cedula/10;
            cedula = cedula%10;
        }
        if(cedula >= 5 && cedula <=9)
        {
            nota5 = cedula/5;
            cedula = cedula%5;
        }
        if(cedula >= 2 && cedula <=4)
        {
            nota2 = cedula/2;
            cedula = cedula%2;
        }
        nota1 = cedula;
        
        System.out.println(""+cedula1);
        System.out.println(nota100 +" nota(s) de R$ 100,00");
        System.out.println(nota50 +" nota(s) de R$ 50,00");
        System.out.println(nota20 +" nota(s) de R$ 20,00");
        System.out.println(nota10 +" nota(s) de R$ 10,00");
        System.out.println(nota5 +" nota(s) de R$ 5,00");
        System.out.println(nota2 +" nota(s) de R$ 2,00");
        System.out.println(nota1 +" nota(s) de R$ 1,00");
        

    }
    
}
