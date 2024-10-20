#include <stdio.h>

int main()
{
	int rena, caso=9, soma=0;

	for(; caso>0; caso--)
	{
		scanf("%d", &rena);
		soma = soma + rena;
	}

	while(soma > 9)
	{
		soma = soma - 9;
	}

	if(soma == 1)
		printf("Dasher\n");
	else if(soma == 2)
		printf("Dancer\n");
	else if(soma == 3)
		printf("Prancer\n");
	else if(soma == 4)
		printf("Vixen\n");
	else if(soma == 5)
		printf("Comet\n");
	else if(soma == 6)
		printf("Cupid\n");
	else if(soma == 7)
		printf("Donner\n");
	else if(soma == 8)
		printf("Blitzen\n");
	else
		printf("Rudolph\n");

	return 0;

}
