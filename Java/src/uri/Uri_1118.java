package uri;

import java.util.*;

public class Uri_1118 {

  public static void main(String[] args) {
    try (Scanner leitor = new Scanner(System.in)) {
      double nota1, nota2, flag = 1;

      while (flag == 1) {
        nota1 = leitor.nextFloat();
        while (nota1 > 10 || nota1 < 0) {
          System.out.println("nota invalida");
          nota1 = leitor.nextFloat();
        }

        nota2 = leitor.nextFloat();
        while (nota2 > 10 || nota2 < 0) {
          System.out.println("nota invalida");
          nota2 = leitor.nextFloat();
        }

        double media = (nota1 + nota2) / 2;
        System.out.printf("media = %.2f\n", media);

        System.out.println("novo calculo (1-sim 2-nao)");
        flag = leitor.nextFloat();
        while (flag != 1 && flag != 2) {
          System.out.println("novo calculo (1-sim 2-nao)");
          flag = leitor.nextFloat();
        }
      }
    }
  }
}
