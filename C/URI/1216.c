#include<stdio.h>
int main()
{
  int dis, soma=0;
  double media=0.0, total=0.0;
  char nome[255];

	while(scanf(" %[^\n]", nome) != EOF)
	{
		scanf("%d", &dis);
		soma = dis + soma;
		total = total + 1.0;
	}
	media =  soma/ total;
	printf("%.1lf\n", media);

return 0;
} 