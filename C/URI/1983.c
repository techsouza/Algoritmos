#include <stdio.h>

typedef struct ecolhido{
	unsigned long long int matricula;
	double nota;
}aluno;

int main ()
{
	aluno vetor[1000];
	int i, n, aux;
	double maior;

	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%lld", &vetor[i].matricula);
		scanf("%lf", &vetor[i].nota);
	}

	maior = vetor[0].nota;

	for(i=0; i<n; i++)
	{
		if(vetor[i].nota > maior)
		{
			maior = vetor[i].nota;
			aux = i;
		}
	}
	if(vetor[aux].nota < 8.0)
		printf("Minimum note not reached\n");
	else
		printf("%lld\n", vetor[aux].matricula);

	return 0;
}