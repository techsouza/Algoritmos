#include<stdio.h>

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	
	if(a == b && b == c && c == a)
	{	
		printf("Valido-Equilatero\n");
		if(a*a == (b*b) + (c*c))
			printf("Retangulo: S\n");	
		else
			printf("Retangulo: N\n");
	}
	else if(a == b || b == c || c == a)
	{
		printf("Valido-Isoceles\n");
		if(a*a == (b*b) + (c*c))
			printf("Retangulo: S\n");	
		else
			printf("Retangulo: N\n");
	}
	else if(a+c > b)
	{
		printf("Valido-Escaleno\n");
		if(a*a == (b*b) + (c*c))
			printf("Retangulo: S\n");	
		else
			printf("Retangulo: N\n");
	}
	else
		printf("Invalido\n");

	return 0;
}