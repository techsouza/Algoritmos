#include <stdio.h>

#include <math.h>



void main ()

{

	int n;
	scanf("%d", &n);
	printf("%.1lf\n", (1 / sqrt(5)) * pow(((1 + sqrt(5)) / 2), n) - ( 1 / sqrt(5)) * pow((( 1 - sqrt(5)) / 2), n));



}