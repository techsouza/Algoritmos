#include <stdio.h> 
#include <string.h>
#define TAM  90

int main(){  
  char nome[TAM], nomeSalvo[TAM], nome1[TAM], real[TAM];
  int i;    
  nomeSalvo[0] = '\0';
  nome1[0] = '\0';

          while(scanf(" %[^\n]", nome) != EOF)
                 {
                        setbuf(stdin, NULL);

                           for(i=0; nome[i]!='\0'; i++)
                           {  
                              if(nome[i] >= 'A' && nome[i] <= 'Z') 
                                 nome1[i] = nome[i]+32;
                              else  
                                nome1[i] = nome[i];
                           }

                           nome1[i]='\0';

                                     if (strcmp(nome1,  nomeSalvo) > 0)
                                     {
                                                        strcpy(nomeSalvo, nome1);
                                                        strcpy(real, nome);
                                     }

 
                } 


 printf("%s\n", real);

  return 0; 
}