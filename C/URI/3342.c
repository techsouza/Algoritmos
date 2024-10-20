#include <stdio.h>

int main()
{
    int tab;

    scanf("%d", &tab);

    if (tab % 2 == 0)
    {
        tab = tab * tab;
        printf("%d casas brancas e %d casas pretas", tab / 2, tab / 2);
    }
    else
    {
        tab = tab * tab;
        tab = tab / 2;
        printf("%d casas brancas e %d casas pretas", tab + 1, tab);
    }
}