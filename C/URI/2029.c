#include <stdio.h>

int main()
{
	double volume, diametro, altura, area;

	while(scanf("%lf", &volume) != EOF && scanf("%lf", &diametro) != EOF)
	{
		area = 3.14 * ((diametro/2)*(diametro/2));
		altura = volume / ( 3.14 *(diametro/2)*(diametro/2));

		printf("ALTURA = %.2lf\n", altura);
		printf("AREA = %.2lf\n", area);
	}
	return 0;
}