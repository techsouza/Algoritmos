package uri;

import java.util.*;

public class Uri_1020 {

    public static void main(String[] args)
    {
        try (Scanner leia = new Scanner(System.in)) {
            int days = leia.nextInt();

            int years = days/365;
            days = days -(years*365);

            int months = days/30;
            days = days-(months*30);

            System.out.println(years+" ano(s)");
            System.out.println(months+" mes(es)");
            System.out.println(days+" dia(s)");
        }

    }
}