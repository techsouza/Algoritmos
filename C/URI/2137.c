#include <stdio.h>
#include <string.h>
#define MAX 1000

typedef struct ordernar{
	char numero[5];
}biblioteca;

void intercala(int p, int q, int r, biblioteca v[MAX]){
	int i, j, k;
	biblioteca w[MAX];
	
	i = p;
	j = q;
	k = 0;
	
	while (i < q && j < r){
		if(strcmp(v[i].numero, v[j].numero) <= 0){
			w[k] = v[i];
			i++;
		}
		else{
			w[k] = v[j];
			j++;
		}
		k++;
	}
	while(i < q){
		w[k] = v[i];
		i++;
		k++;
	}
	while(j < r){
		w[k] = v[j];
		j++;
		k++;
	}
	for(i = p; i < r; i++)
		v[i] = w[i - p];
}

void mergesort(int p, int r, biblioteca v[MAX]){
	int q;
	
	if(p < r-1){
		q = (p + r) / 2;
		mergesort(p, q, v);
		mergesort(q, r, v);
		intercala(p, q, r, v);
	}
}

int main()
{
	biblioteca vetor[1000];
	int i, quant;

	while(scanf("%d", &quant) != EOF)
	{
		for(i=0; i<quant; i++)
		{	
			scanf("%s", vetor[i].numero);
			getchar();
		}
		mergesort(0, quant, vetor);
		for(i=0; i<quant; i++)
		{
			printf("%s\n", vetor[i].numero);
		}
	}
	return 0;
}