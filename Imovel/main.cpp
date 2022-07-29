#include <iostream>
#include <string>

#include "hub.h"

using std::cout; using std::endl; using std::cin;
using std::string; 
 
  
int main() {

    double preco;
    string end;

    cout<< "Digite o endereço do seu imovel: "<< endl;
    cin >> end;

    cout << "Digite o preço do seu imovel: "<< endl;
    cin >> preco;

    Imovel casa(end,preco);
    casa.displayMessage();

    ImovelNovo casaN(end,preco);
    casaN.displayMessage();

    ImovelVelho casaV(end,preco);
    casaV.displayMessage();

};
