#include <stdio.h>
 
int main() {
 
 double valor_antigo, valor_atual, porcentagem;
        scanf("%lf %lf", &valor_antigo, &valor_atual);
        porcentagem = valor_atual / valor_antigo;
        porcentagem = (porcentagem - 1) * 100;
        printf("%.2lf%%\n", porcentagem);


 
    return 0;
}