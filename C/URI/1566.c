#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NC, i, j, a;
    int N, h[231] = {0}, num;
    scanf("%d", &NC);
    for (i = 0; i < NC; i++)
    {
        scanf("%d", &N);

        for (j = 0; j < N; j++)
        {
            scanf("%d", &num);
            h[num]++;
        }
        a=0;
        for (j = 0; j < 231; j++)
        {
            if (h[j] != 0)
            {

                if(a!=0)
                printf(" ");

                printf("%d", j);
                a=1;
                h[j]--;
                j--;
            }
        }
        printf("\n");
    }
    return 0;
}
