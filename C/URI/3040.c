#include<stdio.h>

int main()
{
	int h, d, g, cases;
	
	scanf("%d", &cases);
	
	for(; cases>0; cases--)
	{
		scanf("%d %d %d", &h, &d, &g);
		
		if(h >= 200 && h<= 300 && d>= 50 && g>=150)
			printf("Sim\n");
			
		else
			printf("Nao\n");
	}
	
	return 0;
}
