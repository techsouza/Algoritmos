#include<stdio.h>
int main()
{
  int gd, ad, dd, ld, bonus=0;
  int gg, ag, dg, lg, caso;

	scanf("%d", &caso);
	for(; caso>0; caso--)
	{
		bonus = 0;
		scanf("%d", &bonus);	
		scanf("%d %d %d", &ad, &dd, &ld);
		scanf("%d %d %d", &ag, &dg, &lg);
	
		if(ld%2 == 0)
			gd = ((ad + dd) / 2) + bonus;
		else		
			gd = ((ad + dd) / 2);
		if(lg%2 == 0)
			gg = ((ag + dg) / 2) + bonus;
		else		
			gg = ((ag + dg) / 2);
	
		if(gg == gd)
			printf("Empate\n");
		else if( gg > gd)
			printf("Guarte\n");
		else if( gg < gd)
			printf("Dabriel\n");
	}





 return 0;
}