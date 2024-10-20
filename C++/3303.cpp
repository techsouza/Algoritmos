#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{

    char palavra[20];
    int tamanho;

    std::cin >> palavra;
    tamanho = strlen(palavra);

    if(tamanho >= 10)
        std::cout << "palavrao\n";
    else
        std::cout << "palavrinha\n";


}
