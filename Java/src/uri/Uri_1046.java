package uri;

import java.util.*;

public class Uri_1046{

    public static void main(String[] args){

        try (Scanner read = new Scanner(System.in)) {
            int a = read.nextInt();
            int b = read.nextInt();

            if(a == b)
            {
                System.out.println("O JOGO DUROU 24 HORA(S)");
            }
            else if(a > b)
            {
                int total = a -24;
                total = Math.abs(total) + b;
                System.out.println("O JOGO DUROU "+total+" HORA(S)");

            }
            else 
            {
                int total = b-a;
                
                System.out.println("O JOGO DUROU "+total+" HORA(S)");

            }
        }
    }

}