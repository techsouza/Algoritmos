#include<stdio.h>
#include<string.h>

int main()
{
    int i=0, j=0, tam;
    char frase[250];
    char codificada[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','X','W','Y','Z'};
    char codificada1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};


    while(gets(frase)!= NULL)
    {

        tam = strlen(frase);
        for(i=0; i<tam; i++)
        {
            if(frase[i] >=65 && frase[i] <= 90)
            {
                for(j=0; codificada[j] != frase[i]; j++)
                    ;
            }
            if(frase[i] >=97 && frase[i] <= 122)
            {
                for(j=0; codificada1[j] != frase[i]; j++)
                    ;
            }

            if(frase[i] >=65 && frase[i] <= 77)
            {
                frase[i] = codificada[j+12];

            }
            else if(frase[i] >=78 && frase[i] <= 90)
            {
                frase[i] = codificada[j-12];

            }
            else if(frase[i] >=97 && frase[i] <= 109)
            {
                frase[i] = codificada1[j+13];

            }
            else if(frase[i] >= 110 && frase[i] <= 122)
            {
                frase[i] = codificada1[j-13];

            }
            else
                ;

        }
         printf("%s\n", frase);

    }


    return 0;
}
