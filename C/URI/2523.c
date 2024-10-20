#include<stdio.h>

int main()
{
	int n, quant, i, j=0;
	char letra[27], mensagen[100000];

	while(scanf("%s", letra) != EOF)
	{
		scanf("%d", &quant);
		for(; quant>0; quant--)
		{
			scanf("%d", &n);
			for(i=0; n!=i; i++)
				;
			
			mensagen[j] = letra[i-1];
			j++;
		}
		mensagen[j++]='\0';
		printf("%s\n", mensagen);
		j=0;
	}
	return 0;

}