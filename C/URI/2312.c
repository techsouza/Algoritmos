#include <stdio.h>
#include <string.h>
#define MAX 1000

struct tipo {
	char pais[MAX];
	int ouro;
	int prata;
	int bronze;
};

typedef struct tipo quadro;


void trocas_sucessivas(int n, quadro v[MAX])
{
	int i, j;
	quadro aux;
	for (i = n - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (v[j].ouro < v[j+1].ouro)
			{
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
			else if(v[j].ouro == v[j+1].ouro)
			{
				if(v[j].prata < v[j+1].prata)
				{
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
				}
				else if(v[j].prata == v[j+1].prata)
				{
					if(v[j].bronze < v[j+1].bronze)
					{
						aux = v[j];
						v[j] = v[j+1];
						v[j+1] = aux;
					}
					else if(v[j].bronze == v[j+1].bronze)
					{
						if(strcmp(v[j].pais, v[j+1].pais) > 0)
						{
							aux = v[j];
							v[j] = v[j+1];
							v[j+1] = aux;
						}
					}		
				}
			}
		}
	}
}
	
int main()
{
	quadro medalhas[MAX];
	int i, n;
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		scanf("%s %d %d %d", medalhas[i].pais, &medalhas[i].ouro, &medalhas[i].prata, &medalhas[i].bronze);
	}
	trocas_sucessivas(n, medalhas);
	for(i=0; i<n; i++)
	{
		printf("%s %d %d %d\n", medalhas[i].pais, medalhas[i].ouro, medalhas[i].prata, medalhas[i].bronze);
	}

return 0;
}