package uri;

import java.util.Scanner;

public class Uri_1070 {

    public static void main(String[] args) {

        int num=0;

        try (Scanner read = new Scanner(System.in)) {
            num = read.nextInt();
        }
        for (int i = 0; i < 12; i++)
        {
            if (num % 2 != 0)
               System.out.println(num);
    
            num++;
        }

    }
}
