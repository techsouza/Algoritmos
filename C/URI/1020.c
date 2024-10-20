#include <stdio.h>
 
int main() {
 
 int  mes, ano, restoano, restomes, nasc;
        scanf("%d", &nasc);
        restoano = 0;
        ano =0;
        mes =0;
        if(nasc >= 365){
        {
                restoano = nasc % 365;
                ano = nasc / 365;
        }
                if ( restoano >= 30 )
                {
                        restomes = restoano % 30;
                        mes = restoano / 30;
                }
        }
        else{
                restomes = nasc % 30;
                mes = nasc / 30;
        }
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, restomes);

    return 0;
}