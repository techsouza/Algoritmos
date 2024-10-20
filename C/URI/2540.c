#include <stdio.h>

int main()
{
	int n, voto, cont;
	double media, n1;

	while(scanf("%d", &n) != EOF)
	{
		cont=0;
		n1 = n;
		for(; n>0; n--)
		{
			scanf("%d", &voto);
			if(voto == 1)
				cont++;
		}
		media = cont/(n1);
		
		if(media >= 2.0/3.0)
			printf("impeachment\n");
		else
			printf("acusacao arquivada\n");
	}
	return 0;	
}