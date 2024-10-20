package uri;
import java.util.*;

public class Uri_1146 {

    public static void main(String[] args) {
        int x;
        try (Scanner leia = new Scanner(System.in)) {
            x = leia.nextInt();

            while(x != 0)
            {
                for(int i = 1; i <= x ; i++)
                {
                    if (i != x)
                    {
                        System.out.print(i + " ");
                    }
                    else
                    {
                        System.out.println(i);
                    }
                }
                x = leia.nextInt();
            }
        }
        
    }    
}
