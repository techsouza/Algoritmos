#include<stdio.h>

int main()
{
        int d, a, l, c;

        scanf("%d", &d);
        scanf("%d %d %d", &a, &l, &c);

        if(d <=a  && d <= l && d <= c)

            printf("S\n");
        else
            printf("N\n");

    return 0;
}
