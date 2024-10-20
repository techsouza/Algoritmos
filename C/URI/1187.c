#include<stdio.h>
int main()
{
  int i, j, c=10, c1=1;
  double matriz[12][12], total=0;
  char tipo;

	scanf("%c", &tipo);

	for(i=0; i<12; i++)
		for(j=0; j<12; j++)
			scanf("%lf", &matriz[i][j]);


	for(i=0; i<=4; i++)
	{
		for(j=c1; j<=c; j++)
			total = matriz[i][j] + total;
			
		c1++;
		c--;
	}
	

	if(tipo == 'M')
	{
		total = total/30.0;
	}
	
	printf("%.1lf\n", total);



return 0;
}