#include <stdio.h>
 
int main()
{
  int pp[150][150], i, j, l, c, cont=0, teste=0;

        scanf("%d %d", &l, &c);

        while(l != 0 || c != 0)
        {
                        for(i=0; i<l; i++)
                        {
                                for(j=0; j<c; j++)
                                {
                                        scanf("%d", &pp[i][j]);
                                }
                        }

                        for(i=0; i<l; i++)
                        {
                                for(j=0; j<c; j++)
                                {
                                        if(pp[i][j] == 0)
                                        {
                                                teste = teste+1;
                                                break;
                                        }
                                }
                                if(teste == l)
                                        cont = cont + 1;
                        }
                        teste = 0;

                        for(j=0; j<c; j++)
                        {
                                for(i=0; i<l; i++)
                                {
                                        if(pp[i][j] == 1)
                                        {
                                                teste = teste+1;
                                                break;
                                        }
                                }
                                if(teste == c)
                                        cont++;
                        }
                        teste = 0;

                        for(j=0; j<c; j++)
                        {
                                for(i=0; i<l; i++)
                                {
                                        if(pp[i][j] == 0)
                                        {
                                                teste = teste + 1;
                                                break;
                                        }
                                }
                        if(teste == c)
                                cont++;
                        }
                        teste = 0;

                        for(i=0; i<l; i++)
                        {
                                for(j=0; j<c; j++)
                                {
                                        if(pp[i][j] == 1)
                                        {
                                                teste = teste + 1;
                                                break;
                                        }
                                }
                        if(teste == l)
                                cont++;
                        }
                        if(c == 0)
                                cont = 2;
        printf("%d\n", cont);
                cont=0;
                teste = 0;
        scanf("%d %d", &l, &c);
        }

return 0;
}
