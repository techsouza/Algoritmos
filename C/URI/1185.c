#include<stdio.h>
int main()
{
  int i, j, c=11;
  double matriz[12][12], total;
  char tipo;

	scanf("%c", &tipo);

	for(i=0; i<12; i++)
		for(j=0; j<12; j++)
			scanf("%lf", &matriz[i][j]);

	for(i=0; i<11; i++)
	{
		for(j=0; j<c; j++)
			total = total + matriz[i][j];

		c--;
	}

	if(tipo == 'M')
		total = total/66.0;

	printf("%.1lf\n", total);



return 0;
}