#include<stdio.h>
int main()
{
  int i=0, n, tam=0;
  char nome[6]={0};
        scanf("%d", &n);
        for(; n>0; n--)
        {
                tam=0;
                scanf(" %[^\n]", nome);
                setbuf(stdin, NULL);
                for(i=0; nome[i]!='\0'; i++)
                {
                         tam++;
                }

                if(tam==3)
                {
                        if(nome[0]=='o' && nome[1]=='n' || nome[1]=='n' && nome[2]=='e' || nome[0]=='o' && nome[2]=='e')
                                        printf("1\n");

                        else if(nome[0]=='t' && nome[1]=='w' || nome[1]=='w' && nome[2]=='o' || nome[0]=='t' && nome[2]=='o')

                                        printf("2\n");
                }
                else
                        printf("3\n");

        }
return 0;
}


