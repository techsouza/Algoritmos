#include <stdio.h>
#include<math.h>
int main() {
int divisor, p, n, primo = 1, raiz;
        scanf("%d", &n);
        for(; n>0; n-- )
        {
        divisor = 2;
                scanf("%d", &p);
                primo = 1;
                raiz = sqrt(p);
                while (divisor <= raiz)
                {
                        if(p%2==0)
                        {
                                primo=0;
                                break;
                        }
                        else if(p%divisor == 0)
                        {
                                primo = 0;
                                break;
                        }
                         divisor++;
        }
                if(primo == 0)
                printf("Not Prime\n");
                else if(primo == 1)
                printf("Prime\n");
        }

    return 0;
}