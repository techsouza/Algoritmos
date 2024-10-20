#include <stdio.h>
 
int main() {
 
int opcao, quantidade;
  double total;
        scanf("%d %d", &opcao, &quantidade);
        if(opcao == 1)
        {
          total = 4.00 * quantidade;
        }
        else if(opcao == 2)
        {
          total = 4.50 * quantidade;
        }
        else if(opcao == 3)
        {
          total = 5.00 * quantidade;
        }
        else if(opcao == 4)
        {
          total = 2.00 * quantidade;
        }
        else if(opcao == 5)
        {
          total = 1.50 * quantidade;
        }
        printf("Total: R$ %.2lf\n", total);

 
    return 0;
}