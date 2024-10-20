#include stdio.h
 
int main() {
 
 double salario, reajuste;
        int percentual;
        scanf(%lf, &salario);

        if(salario = 0 && salario = 400.00)
        {
          reajuste = salario  0.15;
          salario = salario + reajuste;
          percentual = 15;
        }
        else if (salario = 400.01 && salario = 800.00)
        {
          reajuste = salario  0.12;
          salario = salario + reajuste;
          percentual = 12;
        }
        else if (salario = 800.01 && salario = 1200.00)
        {
          reajuste = salario  0.10;
          salario = salario + reajuste; 
          percentual = 10;
        }
        else if (salario = 1200.01 && salario = 2000.00)
        {
          reajuste = salario  0.07;
          salario = salario + reajuste;
          percentual = 7;
        }
        else if (salario  2000.00)
        {
          reajuste = salario  0.04;
          salario = salario + reajuste;
          percentual = 4;
        }
       printf(Novo salario %.2lfnReajuste ganho %.2lfnEm percentual %d %%n, salario, reajuste, percentual);
 
    return 0;
}