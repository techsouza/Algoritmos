package uri;
import java.util.*;

public class Uri_1040 {

    public static void main(String[] args){

     

        try (Scanner read = new Scanner(System.in)) {
            double n1 = read.nextFloat();
            double n2 = read.nextFloat();
            double n3 = read.nextFloat();
            double n4 = read.nextFloat();

            //double media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
            double media = Math.floor(2 * n1 + 3 * n2 + 4 * n3 + 1 * n4)/10;
            if(media >= 7)
            {
                System.out.printf("Media: %.1f\n", media);
                System.out.printf("Aluno aprovado.\n");
            }
            else if(media >= 5 && media <= 6.9)
            {
                System.out.printf("Media: %.1f\n", media);
                System.out.printf("Aluno em exame.\n");

                double exame = read.nextFloat();
                double media_final = (media + exame)/2;

                if(media_final >= 5)
                {
                    System.out.printf("Nota do exame: %.1f\n", exame);
                    System.out.printf("Aluno aprovado.\n");
                    System.out.printf("Media final: %.1f\n", media_final);
                }
                else 
                {
                    System.out.printf("Nota do exame: %.1f\n", exame);
                    System.out.printf("Aluno reprovado.\n");
                    System.out.printf("Media final: %.1f\n", media_final);

                }
            }
                else if(media < 5)
                    System.out.printf("Media: %.1f\nAluno reprovado.\n", media);
        }
    }

}
    

