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
	else if(a == b || b == c || c == a)#include <stdio.h>
#include <stdlib.h>

int main() {
 
	int h1, m1, h2, m2, tempohora, tempominuto;

tempohora = 0;
tempominuto = 0;

	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

	if(h1 == h2 && m1 == m2)
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

	if(h1 == h2 && m1 > m2){
		tempohora = 23;
		tempominuto = (abs(m1 - 60)) + m2;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 == h2 && m1 < m2){
		tempohora = 23;
		tempominuto = (abs(m2 - 60)) + m1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 > h2 && m1 == m2){
		tempohora = (abs(h1 - 24)) + h2;
		tempominuto = 0;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 > h2 && m1 > m2){
		tempohora = ((abs(h1 - 24)) + h2) - 1;
		tempominuto = (abs(m1 - 60)) + m2;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 > h2 && m1 < m2){
		tempohora = (abs(h1 - 24)) + h2;
		tempominuto = m2 - m1;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 < h2 && m1 == m2){
		tempohora = (abs(h2 - 24)) + h1;
		tempominuto = 0;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 < h2 && m1 > m2){
		tempohora = (h2 - h1) - 1;
		tempominuto = (abs(m1 - 60) + m2);
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}

	if(h1 < h2 && m1 < m2){
		tempohora = (abs(h1 - h2));
		tempominuto = (abs(m1 - m2));
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempohora, tempominuto);
	}


return 0;
}
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