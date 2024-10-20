#include<stdio.h>
#define MAX 10000
int main()
{
  double letra=0.00;
  int n, i;
  char galopeira[MAX+1];
        scanf("%d", &n);

        for(; n>0; n--)
        {
                scanf("%s", galopeira);
                setbuf(stdin, NULL);
                for(i=0; galopeira[i]!='\0'; i++)
                        letra= letra+0.01;
        printf("%.2lf\n", letra);
        letra = 0;
        }



return 0;
}