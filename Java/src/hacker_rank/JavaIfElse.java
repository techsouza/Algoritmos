package hacker_rank;
import java.util.*;

public class JavaIfElse {
    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int a = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        
        if(a%2 == 1 || a%2 == 0 && a >= 6 && a <=20)
            System.out.println("Weird");
        else
            System.out.println("Not Weird");
        scanner.close();
    }
}
