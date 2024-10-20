#include<stdio.h>

int main()

{
    int l, c, casa=1;

    scanf("%d", &l);
    scanf("%d", &c);

    if(l%2==0 && c%2==0)
        casa = 1;

    else if(l%2==1 && c%2==1)
        casa = 1;

    else if(l%2==1 && c%2==0)
        casa = 0;

    else
        casa = 0;

    printf("%d\n", casa);

    return 0;
}
