#include<stdio.h>
int main()
{
  int i, nota[10000], aluno, n, soma=0, cont=0;
  double media;

        scanf("%d", &n);
        for(; n>0; n--) 
        {
                scanf("%d", &aluno);  
                for(i=0; i<aluno; i++)
                {
                        scanf("%d", &nota[i]);
                }   
                for(i=0; i<aluno; i++)
                {
                        soma = soma + nota[i];
                }   
                  soma = soma / aluno;
                for(i=0; i<aluno; i++)
                {  
                        if(nota[i] > soma)                              
                        {
                                cont++;
                        }
                }   
                media = (100.0 * cont)/aluno;
        printf("%.3lf%%\n", media);
        cont=0;
        soma=0;
        } 

return 0;
}
