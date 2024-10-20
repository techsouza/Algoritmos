#include<stdio.h>

int main()

{
    float w1, w2, r, geral=0, media=0;
    int i=0;

    while(1)
    {
        scanf("%f %f %f", &w1, &w2, &r);

        if(w1 == 0 && w2 == 0 && r == 0)
            break;
        geral = (w1+w2)/2;
        geral=geral*(1+r/30);
        if(geral < 13)
           printf("Nao vai da nao\n");
        if(geral >= 13 && geral < 14)
           printf("E 13\n");
        if(geral < 40 && geral >= 14)
           printf("Bora, hora do show! BIIR!\n");
        if(geral <= 60 && geral >=40)
           printf("Ta saindo da jaula o monstro!\n");
        if(geral > 60)
           printf("AQUI E BODYBUILDER!!\n");

        i++;
        media = media+geral;
    }
    if((media/i) > 40.0)
        printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    return 0;
}


