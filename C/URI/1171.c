#include <stdio.h>

int main()
{
    int x[2000]={0}, i=0, cont=0, caso=0, numero, j=0;

    scanf("%d", &caso);

    for(i; i<caso; i++)
    {
        scanf("%d", &x[i]);
    }
    numero = x[0];
    for(i=0; i<=caso; i++)
    {
        if(x[i] == numero)
        {
            cont++;
            x[i] = 0;
        }
        if(i == caso)
        {
            i=0;
            j++;
            printf("%d\n", cont);
            cont=0;
        }

        if(x[caso-1] == 0)
            break;
    }

    printf("%d\n", cont);
    return 0;


}
