#include <stdio.h>

int main()
{

        int x, y, aux;
        scanf("%d %d", &x, &y);
        if (y < x)
        {
                aux = y;
                y = x;
                x = aux;
        }
        x = x + 1;
        while (x < y)
        {
                if (x % 5 == 2 || x % 5 == 3)
                        printf("%d\n", x);
                x++;
        }

        return 0;
}