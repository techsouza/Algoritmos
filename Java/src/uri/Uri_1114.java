package uri;

import java.io.IOException;
import java.util.*;

public class Uri_1114 {

  public static void main(String[] args) throws IOException {
    int x = 0000;
    try (Scanner leia = new Scanner(System.in)) {
      while (x != 2002) {
        x = leia.nextInt();
        System.out.println((x == 2002) ? "Acesso Permitido" : "Senha Invalida");
      }
    }
  }
}
