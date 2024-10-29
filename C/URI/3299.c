#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
 
    size_t tamanho = 1000000;
    char *numero = (char *)malloc(tamanho * sizeof(char));

    scanf("%s", numero);

    if (strstr(numero, "13") != NULL) {
        printf("%s es de Mala Suerte\n", numero);
    } else {
        printf("%s NO es de Mala Suerte\n", numero);
    }
 
    return 0;
}