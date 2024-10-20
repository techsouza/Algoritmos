package uri;

import java.util.*;

public class Uri_1044{

    public static void main(String[] args){

        try (Scanner read = new Scanner(System.in)) {
            int x = read.nextInt();
            int y = read.nextInt();

            if(x%y == 0 || y%x == 0)
                System.out.println("Sao Multiplos");
            else
                System.out.println("Nao sao Multiplos");
        }
    }

}