package hacker_rank;
import java.util.*;

public class Java_Loops_II {

    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {
            int q = sc.nextInt();
            for (int i = 1; i<=q; i++){
   
   
                int a = sc.nextInt();
                int b= sc.nextInt();
                int n = sc.nextInt();
   
   
            for(int j = 0; j<n; j++ ){
   
     a += (int)( Math.pow(2,j)*b);
            System.out.print(a);
            System.out.print(" ");
            } System.out.println();
            }
        }

    }

}
