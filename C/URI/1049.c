#include <stdio.h>
#include <string.h>
int main()
{
        char opcao1[255], opcao2[255], opcao3[255];
        char vertebrado[255], ave[255], carnivoro[255], mamifero[255], onivoro[255], herbivoro[255], hematofago[255], inseto[255], anelideo[255], invertebrado[255];
        strcpy(mamifero, "mamifero");
        strcpy(onivoro, "onivoro");
        strcpy(vertebrado, "vertebrado");
        strcpy(invertebrado, "invertebrado");
        strcpy(carnivoro, "carnivoro");
        strcpy(ave, "ave");
        strcpy(herbivoro, "herbivoro");
        strcpy(hematofago, "hematofago");
        strcpy(inseto, "inseto");
        strcpy(anelideo, "anelideo");
        scanf("%s %s %s", opcao1, opcao2, opcao3);
        if (strcmp(opcao1, vertebrado) == 0)
        {
                if (strcmp(opcao2, ave) == 0)
                {
                        if (strcmp(opcao3, carnivoro) == 0)
                                printf("aguia\n");
                        else if (strcmp(opcao3, onivoro) == 0)
                                printf("pomba\n");
                }
                if (strcmp(opcao2, mamifero) == 0)
                {
                        if (strcmp(opcao3, onivoro) == 0)
                                printf("homem\n");
                        else if (strcmp(opcao3, herbivoro) == 0)
                                printf("vaca\n");
                }
        }
        if (strcmp(opcao1, invertebrado) == 0)
        {
                if (strcmp(opcao2, inseto) == 0)
                {
                        if (strcmp(opcao3, hematofago) == 0)
                                printf("pulga\n");
                        else if (strcmp(opcao3, herbivoro) == 0)
                                printf("lagarta\n");
                }
                if (strcmp(opcao2, anelideo) == 0)
                {
                        if (strcmp(opcao3, hematofago) == 0)
                                printf("sanguessuga\n");
                        else if (strcmp(opcao3, onivoro) == 0)
                                printf("minhoca\n");
                }
        }
        return 0;
}
