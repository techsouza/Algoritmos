#include<stdio.h>
int main()
{
  int caso, quant, escolha;
  double total=0.0;

	scanf("%d", &caso);
	for(; caso>0; caso--)
	{
		scanf("%d %d", &escolha, &quant);
		switch(escolha)
		{
			case 1001:
				total = total +(1.50*quant);
				break;
			case 1002:
				total = total + (2.50*quant);
				break;
			case 1003:
				total = total + (3.50*quant);
				break;
			case 1004:
				total = total + (4.50*quant);
				break;
			case 1005:
				total = total + (5.50*quant);
				break;
		}
	
	}
	printf("%.2lf\n", total);
return 0;
}