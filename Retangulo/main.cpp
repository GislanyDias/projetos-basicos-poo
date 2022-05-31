#include <iostream>
#include "Retangulo.h"

using std::cin;
using std::cout;

int main()
{

    double altura;
    double largura;

    cout << "Insira a altura e a largura do seu retãngulo respectivamente: \n";
    cin >> altura >> largura;

    Retangulo novoRetangulo(altura, largura);
    novoRetangulo.DisplayMessage();

    return 0;
}