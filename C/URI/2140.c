#include<stdio.h>
int main()
{
  int nota1, nota2, troco,  dif, nota100=0, nota50=0, nota20=0, nota10=0;
  int nota5=0, nota02=0;

         scanf("%d %d", &nota1, &nota2);

        while(nota1!=0 && nota2!=0)
        {

                if(nota1 < nota2)
                {
                        dif = nota2 - nota1;

                        while(dif>=100)
                        {
                                nota100 = dif/100;
                                dif=dif%100;
                        }
                        while(dif>=50)
                        {
                                nota50 = dif/50;
                                dif=dif%50;
                        }
                        while(dif>=20)
                        {
                                nota20 = dif/20;
                                dif=dif%20;
                        }
                        while(dif>=10)
                        {
                                nota10 = dif/10;
                                dif=dif%10;
                        }
                        while(dif>=5)
                        {
                                nota5 = dif/5;
                                dif=dif%5;
                        }
                        while(dif>=02)
                        {
                                nota02 = dif/2;
                                dif=dif%2;
                        }

                }
        troco = nota100+nota50+nota20+nota10+nota5+nota02;

        if(troco == 2)
                        printf("possible\n");
        else
                        printf("impossible\n");
        nota100=0;
        nota50=0;
        nota20=0;
        nota10=0;
        nota5=0;
        nota02=0;
        scanf("%d %d", &nota1, &nota2);
        }


return 0;
}

