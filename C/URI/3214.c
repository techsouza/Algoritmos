#include <stdio.h>

int main()
{
    int e, f, c, garrafas;

    scanf("%d %d %d", &e, &f, &c);

    garrafas = e + f;
    int cont=0;
    while(garrafas >= c)
    {
        garrafas = garrafas - c;
        garrafas = garrafas + 1;
        cont++;
    }

    printf("%d\n", cont);
}