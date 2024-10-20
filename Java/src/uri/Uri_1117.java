package uri;

import java.util.*;

public class Uri_1117 {

  public static void main(String[] args) {
    try (Scanner leitor = new Scanner(System.in)) {
      double a, media;
      int cont;
      cont = 0;
      media = 0;

      while (cont < 2) {
        a = leitor.nextFloat();
        if (a >= 0 && a <= 10) {
          media = media + a;
          cont++;
        } else System.out.println("nota invalida");
      }
    
    media = media / 2;
    System.out.printf("media = %.2f\n", media);
    }
  }
}
