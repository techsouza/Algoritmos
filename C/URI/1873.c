#include<stdio.h>
int main()

{
  char raj[10], sheldon[10];
  char win[5][5] = {{'E', 'R', 'S', 'R', 'S'},
                {'S', 'E', 'R', 'S', 'R'},
                {'R', 'S', 'E', 'R', 'S'},
                {'S', 'R', 'S', 'E', 'R'},
                {'R', 'S', 'R', 'S', 'E'}};
  char escolha[5] = {'s', 'p', 'd', 'g', 'o'};
  int j, i, n;

        scanf("%d", &n);
        setbuf(stdin, NULL);
        for(; n>0; n--)
        {
                scanf("%s", raj);
                setbuf(stdin, NULL);
                scanf("%s", sheldon);
                setbuf(stdin, NULL);
                for(i=0; escolha[i] != raj[2]; i++)
                {
                }
                for(j=0; escolha[j] != sheldon[2]; j++)
                {
                }
          if(win[i][j] == 'S')
                printf("sheldon\n");
        else if(win[i][j] == 'R')
                printf("rajesh\n");
        else if(win[i][j] == 'E')
                printf("empate\n");
        }



return 0;
}