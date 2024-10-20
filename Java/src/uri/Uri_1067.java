package uri;

import java.util.Scanner;

public class Uri_1067 {

    public static void main(String[] args) {

        int num;

        try (Scanner read = new Scanner(System.in)) {
            num = read.nextInt();
        }
        for (int i = 1; i <= num; i += 2)

            System.out.println(i);

    }
}
