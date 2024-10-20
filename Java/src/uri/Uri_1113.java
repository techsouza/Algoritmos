package uri;

import java.util.*;

public class Uri_1113 {

  public static void main(String[] args) {
    try (Scanner leia = new Scanner(System.in)) {
      int x = leia.nextInt();
      int y = leia.nextInt();

      while (x != y) {
        System.out.println((x > y) ? "Decrescente" : "Crescente");
        x = leia.nextInt();
        y = leia.nextInt();
      }
    }
  }
}
