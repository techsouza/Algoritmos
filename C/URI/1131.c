#include<stdio.h>
int main()
{
  int grenal, inter, gremio, empate=0, j_gremio=0, j_inter=0, jogos=0;
        do{
         scanf("%d %d", &inter, &gremio);

                if(inter<gremio)
                        j_gremio = j_gremio + 1;
                else if(gremio < inter)
                        j_inter = j_inter + 1;
                else if(gremio == inter)
                        empate = empate + 1;
                jogos = jogos + 1;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &grenal);
        }while(grenal != 2);
        printf("%d grenais\n", jogos);
        printf("Inter:%d\n", j_inter);
        printf("Gremio:%d\n", j_gremio);
        printf("Empates:%d\n", empate);
        if(j_gremio<j_inter)
                printf("Inter venceu mais\n");
        else if(j_inter<j_gremio)
                printf("Gremio venceu mais\n");
        else if(j_inter==j_gremio)
                printf("Nao houve vencedor\n");


return 0;
}
