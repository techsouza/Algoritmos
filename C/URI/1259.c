#include<stdio.h>

void par(int vp[], int tamanho)
{
  int aux, i, j;

  for(j=tamanho-1; j>=1; j--)
  {
    for(i=0; i<j; i++)
    {
      if(vp[i] > vp[i+1])
      {
        aux=vp[i];
        vp[i]=vp[i+1];
        vp[i+1]=aux;
      }
    }
  }
}
void impar(int vi[], int tamanho)
{
  int aux, i, j;

  for(j=tamanho-1; j>=1; j--)
  {
    for(i=0; i<j; i++)
    {
      if(vi[i] < vi[i+1])
      {
        aux=vi[i];
        vi[i]=vi[i+1];
        vi[i+1]=aux;
      }
    }
  }
}

int main()

{
    int tam, v[100000]={0}, i, j, vp[50000]={0}, vi[50000];

    scanf("%d", &tam);
    i = tam;
    for(; i>0; i--)
    {
        scanf("%d", &v[i]);
    }
    i=0;
    j=0;
    for(; tam>0; tam--)
    {
        if(v[tam]%2==0)
        {
            vp[i]=v[tam];
            i++;
        }

        else
        {
            vi[j]=v[tam];
            j++;
        }

    }

    par(vp, i);
    impar(vi, j);

    for(tam=0; tam<i; tam++)
        printf("%d\n", vp[tam]);
    for(tam=0; tam<j; tam++)
        printf("%d\n", vi[tam]);

    return 0;
}
