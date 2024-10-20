package uri;
import java.util.Scanner;

public class Uri_1079 {

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int numero;

            numero = read.nextInt();
            float a, b, c, media;


            for (int i = 0; i < numero; i++)
            {


                a = read.nextFloat();
                b = read.nextFloat();
                c = read.nextFloat();
                
                media = a*2+b*3+c*5;
                media = media/10;
                System.out.println(String.format("%.1f", media));

            }
        }


    }
}