#include<stdio.h>
int main()
{
int n, i, cont=0;
char texto[30];

  scanf("%d", &n);
        setbuf(stdin, NULL);
        scanf("%s", texto);
                setbuf(stdin, NULL);
                for(i=0; texto[i]!='\0'; i++)
                {
                        cont = cont +1;
                }
                if(cont == 3 && texto[0] == 'U' && texto[1] == 'R' && texto[2] != 'I')
                         printf("URI");
                else if(cont == 3 && texto[0] == 'O' && texto[1] == 'B' && texto[2] != 'I')
                        printf("OBI");
                else
                        printf("%s", texto);
        setbuf(stdin, NULL);

        for(; n>1; n--)
        {
                cont=0;
                scanf("%s", texto);
                setbuf(stdin, NULL);
                for(i=0; texto[i]!='\0'; i++)
                {
                        cont = cont +1;
                }
                if(cont == 3 && texto[0] == 'U' && texto[1] == 'R' && texto[2] != 'I')
                         printf(" URI");
                else if(cont == 3 && texto[0] == 'O' && texto[1] == 'B' && texto[2] != 'I')
                        printf(" OBI");
                else
                        printf(" %s", texto);
        setbuf(stdin, NULL);
        }
        printf("\n");





return 0;
}
