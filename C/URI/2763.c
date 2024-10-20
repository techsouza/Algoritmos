#include<stdio.h>

int main()
{
    int i;
    char cpf[14]={0};

    scanf("%s", cpf);

    for(i=0; i<14; i++)
    {
        if(cpf[i]!='.' && cpf[i]!='-')
            printf("%c", cpf[i]);
        else
            printf("\n");

    }
    printf("\n");
    return 0;
}
