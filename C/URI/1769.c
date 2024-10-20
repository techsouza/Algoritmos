#include<stdio.h>

int main ()
{
    int i, j=1, soma=0, soma1=0, total;
    char cpf[14];

    while(scanf("%s", cpf)!=EOF)
    {
        for(i=0; i<=14; i++)
        {
            if(cpf[i] >= 0 && cpf[i] <=9)
            {
                soma = soma + ('0'-cpf[i]);

            }
            else
                ;
        }
        for(i=0; i<=11; i++)
        {
            if(cpf[i] >=0 && cpf[i] <=9)
            {
                total = (cpf[i]-'0') * j;
                soma1=soma1+total;
                j++;
            }


        }

           printf("%d\n\n\n", soma);
           printf("%d\n\n\n", soma1);

           soma = 0;
           soma1= 0;
    }
    return 0;
}


