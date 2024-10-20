package uri;

import java.util.Scanner;

public class Uri_1103 {

    public static void main(String[] args) {
        int h1, m1, h2, m2, hora1, hora2, total;
        Scanner leia = new Scanner(System.in);

        h1 = leia.nextInt();
        m1 = leia.nextInt();
        h2 = leia.nextInt();
        m2 = leia.nextInt();

        while (h1 != 0 || h2 != 0 || m1 != 0 || m2 != 0)
        {
            hora1 = (h1 * 60) + m1;
            hora2 = (h2 * 60) + m2;
            if (hora1 < hora2)
                total = hora2 - hora1;
            else
                total = ((60 * 24) - hora1) + hora2;

            System.out.println(total);
            
            h1 = leia.nextInt();
            m1 = leia.nextInt();
            h2 = leia.nextInt();
            m2 = leia.nextInt();
        
        
        }
    }
    
}
