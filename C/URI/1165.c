#include <stdio.h>
 
int main() {
 
int divisor, p, n;
        scanf("%d", &n);
        while(n > 0)
        {
        divisor = 2;
                scanf("%d", &p);
                while (divisor <= p/2)
                {
                        if(p % divisor == 0)
                                divisor = p;
                        else
                                divisor = divisor + 1;
                }
                if(divisor == p/2 + 1)
                printf("%d eh primo\n", p);
                else
                printf("%d nao eh primo\n", p);

        n--;
        }

    return 0;
}