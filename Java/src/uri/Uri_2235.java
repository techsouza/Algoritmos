package uri;

import java.util.Scanner;

public class Uri_2235 {

    public static void main(String[] args) {
        
        try (Scanner read = new Scanner(System.in)) {
            int a = read.nextInt();
            int b = read.nextInt();
            int c = read.nextInt();

            if(a==b || a==c || b==c || a+b==c || a+c==b || b+c==a)
                 System.out.println("S");

             else 
             System.out.println("N");
        }

    }
    
}
