#include<stdio.h>

int main()
{
    int m, p1, p2;

    scanf("%d", &m);
    scanf("%d %d", &p1, &p2);

    if(p1+p2 > m)
        printf("Deixa para amanha!\n");
    else
        printf("Farei hoje!\n");

    return 0;
}
