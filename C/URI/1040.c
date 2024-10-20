#include <stdio.h>
 
int main() {
 
  double n1, n2, n3, n4, media, exame, mediaexame;
        scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
        media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
        if(media >= 7)
                printf("Media: %.1lf\nAluno aprovado.\n", media);
        else if(media >=5 && media <= 6.9)
        {

                        printf("Media: %.1lf\n", media);
                        printf("Aluno em exame.\n");


                scanf("%lf", &exame);
                mediaexame = (media + exame)/2;
                if(mediaexame >= 5)
                {
                        printf("Nota do exame: %.1lf\n", exame);
                        printf("Aluno aprovado.\n");
                        printf("Media final: %.1lf\n", mediaexame);
                }
                else 
                {
                        printf("Nota do exame: %.1lf\n", exame);
                        printf("Aluno reprovado.\n");
                        printf("Media final: %.1lf\n", mediaexame);

                }
        }
        else if(media < 5)
                printf("Media: %.1lf\nAluno reprovado.\n", media);


 
    return 0;
}