#include<stdio.h>
int main()
{
  int n, medida[10001], i, pico=2, pico_1=1;
        scanf("%d", &n);

        for(i=0; i<n; i++)
                scanf("%d", &medida[i]);
        for(i=1; i<n; i++)
        {
                if(medida[i-1] == medida[i])
                {
                        pico_1 = 0;
                        break;
                }

                else if(medida[i-1] < medida[i])
                {
                        if(pico == 1)
                        {
                                pico_1=0;
                                break;
                        }
                pico = 1;
                }
                else if(medida[i-1] > medida[i])
                {
                        if(pico == 0)
                        {
                                pico_1=0;
                                break;
                        }
                  pico = 0;
                }
        }

        if(pico_1==1)
                printf("1\n");
        else if(pico_1 == 0)
                printf("0\n");
return 0;
}

