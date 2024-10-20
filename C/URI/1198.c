#include <stdio.h>
 
int main() {
 
  long long int hash, oponente, diferenca;
        while(scanf("%lld %lld", &hash, &oponente) != EOF)
        {
                if(hash < oponente)
                {
                        diferenca = oponente - hash;
                        printf("%lld\n", diferenca);
                }
                else
                {
                        diferenca = hash - oponente;
                        printf("%lld\n", diferenca);
                }
        }

    return 0;
}