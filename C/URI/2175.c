#include<stdio.h>
int main()
{
  double otavio, bruno, ian;

	scanf("%lf %lf %lf", &otavio, &bruno, &ian);

	if(otavio < bruno && otavio < ian)
		printf("Otavio\n");
	else if(bruno < otavio && bruno < ian)
		printf("Bruno\n");
	else if(ian < otavio && ian < bruno)
		printf("Ian\n");
	else if(bruno == otavio || otavio == ian || bruno == ian)
		printf("Empate\n");


return 0;
}