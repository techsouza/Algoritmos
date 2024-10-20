#include<stdio.h>

int main()

{
    int quebrado, lata, copo, caso;

    scanf("%d", &caso);

    for(; caso > 0; caso--)
    {
        scanf("%d %d", &lata, &copo);

        if(lata > copo)
            copo = lata - copo;

        printf("%d\n", copo);
    }
    return 0;
}


