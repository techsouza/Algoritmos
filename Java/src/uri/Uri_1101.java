package uri;

import java.util.*;

public class Uri_1101 {

  public static void main(String[] args) {
    int soma = 0, i, aux;
    Scanner leia = new Scanner(System.in);

    int a = leia.nextInt();
    int b = leia.nextInt();

    while (a > 0 && b > 0) {
      if (b > a) {
        aux = b;
        b = a;
        a = aux;
      }

      for (i = b; i <= a; i++) {
        soma = soma + i;
        System.out.printf("%d ", i);
      }
      System.out.printf("Sum=%d\n", soma);
      soma = 0;
      a = leia.nextInt();
      b = leia.nextInt();
    }
  }
}
