#include<stdio.h>
int main()
{
  int i;
  char t[600];
	scanf("%[^\n]", t);
	for(i=0; t[i]!='\0'; i++)
		;
	if(i <= 140)
		printf("TWEET\n");
	else
		printf("MUTE\n");

  return 0;
}