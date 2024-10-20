#include <stdio.h>
 
int main() {
 
 int numero, total_c, total_s, total_r, n, total;
  char especie;
  double porcento_c, porcento_r, porcento_s;
        scanf("%d", &numero);
        total_s = 0;
        total_c = 0;
        total_r = 0;
        while(numero > 0)
        {
                scanf("%d %c", &n, &especie);
                        if(especie == 'C')
                        {
                                total_c = total_c + n;
                        }
                        else if (especie == 'R')
                        {
                                total_r = total_r + n;
                        }   
                        else
                        {
                                total_s = total_s + n;
                        }   
        numero = numero - 1;
        }
                total = total_s + total_c + total_r;
                porcento_c = (total_c * 100.00)/total;
                porcento_r = (total_r * 100.00)/total;
                porcento_s = (total_s * 100.00)/total;

        printf("Total: %d cobaias\n", total);
        printf("Total de coelhos: %d\n", total_c);
        printf("Total de ratos: %d\n", total_r);
        printf("Total de sapos: %d\n", total_s);
        printf("Percentual de coelhos: %.2lf %%\n", porcento_c);
        printf("Percentual de ratos: %.2lf %%\n", porcento_r);
        printf("Percentual de sapos: %.2lf %%\n", porcento_s);

 
    return 0;
}