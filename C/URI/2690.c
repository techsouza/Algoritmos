#include<stdio.h>
#include <string.h>

int main()
{
    int i=0, caso, j=0, cont = 0, aux;
    int vet[12]= {0};
    char frase[30] = {0};

    scanf("%d", &caso);

    for(; caso>0; caso--)
    {
        fflush(stdin);
        scanf("%[^\n]", frase);

        i=0;
        cont = 0;
        aux = strlen(frase);

        for(j=0; j<aux; j++)
        {

            if(frase[i] == 'Q' || frase[i] == 'G' || frase[i] == 'a' ||frase[i] == 'k' || frase[i] == 'u')
            {
                vet[j] = 0;
                cont++;
            }
            else if(frase[i] == 'I' || frase[i] == 'S' || frase[i] == 'b' ||frase[i] == 'l' ||frase[i] == 'v')
            {
                vet[j] = 1;
                cont++;
            }
            else if(frase[i] == 'E' || frase[i] == 'O' || frase[i] == 'Y' || frase[i] == 'c' ||frase[i] == 'm' ||frase[i] == 'w')
            {
                vet[j] = 2;
                cont++;
            }
            else if(frase[i] == 'F' || frase[i] == 'P' || frase[i] == 'Z' ||frase[i] == 'd' ||frase[i] == 'n' || frase[i] == 'x')
            {
                vet[j] = 3;
                cont++;
            }
            else if(frase[i] == 'J' || frase[i] == 'T' || frase[i] == 'e' ||frase[i] == 'o' ||frase[i] == 'y')
             {
                vet[j] = 4;
                cont++;
            }
            else if(frase[i] == 'D' || frase[i] == 'N' || frase[i] == 'X' ||frase[i] == 'f' ||frase[i] == 'p' || frase[i] == 'z')
            {
                vet[j] = 5;
                cont++;
            }
            else if(frase[i] == 'A' || frase[i] == 'K' || frase[i] == 'U' ||frase[i] == 'g' ||frase[i] == 'q')
            {
                vet[j] = 6;
                cont++;
            }
            else if(frase[i] == 'C' || frase[i] == 'M' || frase[i] == 'W' ||frase[i] == 'h' ||frase[i] == 'r')
            {
                vet[j] = 7;
                cont++;
            }
            else if(frase[i] == 'B' || frase[i] == 'L' || frase[i] == 'V' ||frase[i] == 'i' ||frase[i] == 's')
            {
                vet[j] = 8;
                cont++;
            }
            else if(frase[i] == 'H' || frase[i] == 'R' || frase[i] == 'j' ||frase[i] == 't')
            {
                vet[j] = 9;
                cont++;
            }
            else
                j--;

            if(cont == 12)
                break;

            i++;
        }
        for(j=0; j<cont; j++)
        {
            printf("%d", vet[j]);
        }
        printf("\n");
    }

    return 0;
}
