#include <stdio.h>
 
int main() {
 
int gasolina, alcool, diesel, opcao;
        gasolina = 0;
        alcool = 0;
        diesel = 0;
        do{
          scanf("%d", &opcao);
                if(opcao == 2)
                        gasolina = gasolina + 1;
                else if(opcao == 1)
                        alcool = alcool + 1;
                else if(opcao == 3)
                        diesel = diesel + 1;
        }       while (opcao != 4);

        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);


 
    return 0;
}