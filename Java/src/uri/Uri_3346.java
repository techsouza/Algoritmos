package uri;
import java.util.*;

public class Uri_3346 {

    public static void main(String[] args) {

        try (Scanner leitor = new Scanner(System.in)) {
            double a = 0, b = 0;

            a = leitor.nextDouble();
            b = leitor.nextDouble();

            a = ((100.00 + a) * (b / 100.00 + 1.00)) - 100.00;

            System.out.printf("%.6f\n", a);
        }
    }

}
