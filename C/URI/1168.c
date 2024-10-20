#include<stdio.h>
int main()
{
  long long int i, n, cont = 0, j;
  char led[300];
  long long int indice[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
        scanf("%lld", &n);
        //setbuf(stdin,NULL);
        for( ;n > 0; n--)
        {
                scanf(" %[^\n]", led);
                //setbuf(stdin, NULL);
                for(i=0; led[i]!='\0'; i++)
                {
                        j = led[i] - '0';
                        cont = cont + indice[j];
                }
          printf("%lld leds\n", cont);
          cont =0;
        }
return 0;
}
