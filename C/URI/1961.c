#include<stdio.h>
int main()
{
  int salto, cano, v[200], dif, i, win =1;
	scanf("%d %d", &salto, &cano);

	for(i=0; i<cano; i++)
		scanf("%d", &v[i]);

	for(i=1; i<cano; i++)
	{
		if(v[i-1] < v[i])
			dif=v[i]-v[i-1];
		
		else
			dif=v[i-1]-v[i];

		if(dif > salto)
			win=0;

	}

	if(win)
		printf("YOU WIN\n");
	else
		printf("GAME OVER\n");


return 0;
}