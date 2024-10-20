#include<stdio.h>
int main()
{
  int i, vetor[1000], n, rpm=1, rpm_f=0, menor;
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
                scanf("%d", &vetor[i]);
        }
        menor=vetor[0];
        for(i=1; i<n; i++)
        {
                if(vetor[i] >= menor)
                {
                        menor=vetor[i];
                }
                else if(vetor[i] < menor)
                {
                        menor = vetor[i];
                        rpm_f = rpm + 1;
                        break;
                }
                  
        rpm= rpm+1;
        }
        printf("%d\n", rpm_f);
return 0;
}
