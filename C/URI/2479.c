#include <stdio.h>
#include <string.h>
#define MAX 1000

struct tipo{
	char nome[MAX];
	char c;
};

typedef struct tipo alunos;

void trocas_sucessivas(int n,  alunos v[MAX])
{
	int i, j;
	alunos aux;
	for (i = n - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (strcmp(v[j].nome, v[j+1].nome) > 0)
				{
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
				}
}

int main()
{
	alunos lista[MAX];
	int i, caso, cont_neg=0, cont_pos=0;

	scanf("%d", &caso);
	getchar();
	

	for(i=0; i<caso; i++)
	{
		scanf("%c  %s", &lista[i].c, lista[i].nome);
		getchar();
	}
	trocas_sucessivas(caso, lista);

	for(i=0; i<caso; i++)
	{
		if(lista[i].c == '+')
			cont_pos++;
		else
			cont_neg++;
	}
	
	for(i=0; i<caso; i++)
		{
			printf("%s\n", lista[i].nome);
		}
	printf("Se comportaram: %d | Nao se comportaram: %d\n", cont_pos, cont_neg);

	return 0;
}