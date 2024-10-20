#include<stdio.h>
int main()
{
  char bazinga[5][5]={{'E', 'R', 'S', 'R', 'S'},
                   {'S', 'E', 'R', 'S', 'R'},
                   {'R', 'S', 'E', 'R', 'S'},
                   {'S', 'R', 'S', 'E', 'R'},
                   {'R', 'S', 'R', 'S', 'E'}};
  int i, j, n, in;
  char sheldon[8], raj[8];
  char escolha[5]={'t', 'p', '7', 'l', 'S'};

        scanf("%d", &n);
        in= 1;
        for(; n>0; n--)
        {
                scanf("%s %[^\n]", sheldon, raj);
                setbuf(stdin, NULL);
                if(sheldon[1] == 'e' && sheldon[0] == 'p')
                                sheldon[0]='7';
                if(raj[0] == 'p' && raj[1] == 'e')
                                raj[0]='7';

                for(i=0; escolha[i]!=sheldon[0]; i++)
                {
                }
                for(j=0; escolha[j]!=raj[0]; j++)
                {
                }

                if(bazinga[i][j] == 'E')
                        printf("Caso #%d: De novo!\n", in);
                else if(bazinga[i][j] =='S')
                        printf("Caso #%d: Raj trapaceou!\n", in);
                else if(bazinga[i][j] == 'R')
                        printf("Caso #%d: Bazinga!\n", in);

                in++;
        }

return 0;
}


