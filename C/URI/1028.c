#include<stdio.h>
int main()
{
  int y, x, r, i;
        scanf("%d", &i);
        r = 1;
        for(; i>0; i--)
        {
                scanf("%d %d", &x, &y);
                if(x > y)
                {
                r = x % y;

                        while(r != 0)
                        {
                                x = y;
                                y = r;
                                r = x % y;
                        }
                printf("%d\n", y);

                }
                else
                {
                r = y % x;

                        while(r != 0)
                        {
                                y = x;
                                x = r;
                                r = y % x;
                        }
                printf("%d\n", x);

                }
        }
return 0;
}


