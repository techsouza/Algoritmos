package uri;

public class Uri_1098 {

    public static void main(String[] args) {

        int var, i = 0, j = 1;
        for (var = 0; var < 11; ++var)
        {
            if ((i / 10.0) == 1 || (i / 10.0) == 2 || (i / 10.0) == 0)
            {
                System.out.println("I="+(i / 10)+ " J=" + ((i / 10) + j));
                System.out.println("I="+(i / 10)+ " J=" + ((i / 10) + j+1));
                System.out.println("I="+(i / 10)+ " J=" + ((i / 10) + j+2));
            }
            else
            {
                System.out.println("I="+(i / 10.0)+ " J=" + ((i / 10.0) + j));
                System.out.println("I="+(i / 10.0)+ " J=" + ((i / 10.0) + j+1));
                System.out.println("I="+(i / 10.0)+ " J=" + ((i / 10.0) + j+2));
            }
            i += 2;
        }

    }
    
}
