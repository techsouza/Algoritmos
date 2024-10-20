package hacker_rank;
import java.util.*;

public class JavaStdinAndStdoutI {

    public static void main(String[] args) {
        try (Scanner read = new Scanner(System.in)) {
            int a = read.nextInt();
            int b = read.nextInt();
            int c = read.nextInt();
            
            System.out.println(a);
            System.out.println(b);
            System.out.println(c);
        }
    }
    
}
