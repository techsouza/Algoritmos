#include <stdio.h>
 
int main() {
 
  int n, contador_positivo;
  double numero, positivo, media;
        contador_positivo = 0;
        positivo = 0;
        n = 0;
        while(n < 6)
        {
          scanf("%lf", &numero);
          if(numero > 0)
          {
                contador_positivo = contador_positivo + 1;
                positivo = positivo + numero;
          }
        n = n + 1;
        }
        media = positivo/contador_positivo;
        printf("%d valores positivos\n%.1lf\n", contador_positivo, media);

 
    return 0;
}