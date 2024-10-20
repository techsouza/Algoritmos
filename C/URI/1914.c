#include <stdio.h>
#include <string.h>


int main()
{
	char nome1[100000], nome2[1000000], escolha[10], escolha1[10];
	int caso, a, b;

	scanf("%d", &caso);
	for(; caso>0; caso--)
	{
		scanf(" %s", nome1);
		
		scanf(" %s", escolha);
		
		scanf(" %s", nome2);
		
		scanf("%s", escolha1);
		getchar();

		scanf("%d", &a);
		scanf("%d", &b);
		a = a + b;

		if(strcmp(escolha, "IMPAR") == 0 && (a%2 == 1))
			printf("%s\n", nome1);
		
		else if(strcmp(escolha, "PAR") == 0 && (a%2 == 0))
			printf("%s\n", nome1);

		else
			printf("%s\n", nome2);

	}
	return 0;
}