#include<stdio.h>
int main()
{
  int senha;
        while(scanf("%d", &senha) != EOF)
        {
                senha = senha-1;
                printf("%d\n", senha);
        }
return 0;
}

