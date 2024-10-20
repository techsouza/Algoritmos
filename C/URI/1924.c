#include<stdio.h>
int main()
{
  int n;
  char curso[101];
        scanf("%d", &n);
        setbuf(stdin, NULL);
        for(; n>0; n--)
        {
                scanf("%[^\n]", curso);
                setbuf(stdin, NULL);
        }
        printf("Ciencia da Computacao\n");
 
return 0;
}

