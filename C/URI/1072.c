#include <stdio.h>

int main()
{

        int n, numero, dentro, fora;
        scanf("%d", &n);
        dentro = 0;
        fora = 0;
        while (n > 0)
        {
                scanf("%d", &numero);
                if (numero >= 10 && numero <= 20)
                {
                        dentro = dentro + 1;
                }
                else
                {
                        fora = fora + 1;
                }
                n = n - 1;
        }

        printf("%d in\n%d out\n", dentro, fora);

        return 0;
}