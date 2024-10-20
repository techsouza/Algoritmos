package uri;

import java.util.Scanner;

public class Uri_3301 {

    public static void main(String[] args) {
        Scanner leia = new Scanner(System.in);

        int h = leia.nextInt();
        int z = leia.nextInt();
        int l = leia.nextInt();

        if ((z > l && z < h) || (z < l && z > h))
            System.out.println("zezinho");
        else if (l > z && l < h || l < z && l > h)
            System.out.println("luisinho");
        else
            System.out.println("huguinho");

    }

}
