package uri;

import java.io.IOException;
import java.util.*;

public class Uri_1115 {

  public static void main(String[] args) throws IOException {
    int x = 1, y = 1;

    try (Scanner leia = new Scanner(System.in)) {
      x = leia.nextInt();
      y = leia.nextInt();

      while ((x != 0) && (y != 0)) {
        if (x > 0 && y > 0) {
          System.out.println("primeiro");
        } else if (x < 0 && y > 0) {
          System.out.println("segundo");
        } else if (x < 0 && y < 0) {
          System.out.println("terceiro");
        } else {
          System.out.println("quarto");
        }
        x = leia.nextInt();
        y = leia.nextInt();
      }
    }
  }
}
