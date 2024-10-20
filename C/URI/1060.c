#include <stdio.h>
 
int main() {
 
 int n, positivo; 
  double numero;
        n = 0;
        positivo = 0;
        while(n < 6)
        {
          scanf("%lf", &numero);
          if( numero > 0)
           positivo = positivo + 1;
        n = n + 1;
        }
        printf("%d valores positivos\n", positivo);

 
    return 0;
}
