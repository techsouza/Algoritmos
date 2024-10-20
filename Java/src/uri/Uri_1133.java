package uri;
import java.io.IOException;
import java.util.Scanner;

public class Uri_1133 {

    public static void main(String[] args) throws IOException {
        try (Scanner leitor = new Scanner(System.in)) {
            int x;
            int y;
            int aux = 0;

            x = leitor.nextInt();
            y = leitor.nextInt();
            ;
            if (y < x) {
                aux = y;
                y = x;
                x = aux;
            }
            x = x + 1;
            while (x < y) {
                if (x % 5 == 2 || x % 5 == 3)
                    System.out.println(x);
                x++;
            }
        }

    }

}
