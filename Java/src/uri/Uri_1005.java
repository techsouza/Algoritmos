package uri;

import java.io.IOException;
import java.util.Scanner;

public class Uri_1005 {

    public static void main(String[] args) throws IOException {
     Scanner scan = new Scanner(System.in);
     double a = scan.nextDouble();
     double b = scan.nextDouble();
     double x = a*3.5;
     double y = b*7.5;
     double z = (x+y)/11;

        System.out.printf("MEDIA = %.5f%n", z);
        scan.close();
    }

} 