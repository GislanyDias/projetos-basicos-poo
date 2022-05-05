#include "Carro.h"
#include <iostream>

using namespace std;

int main() {

  string marca;
  int ano;

  
  cout << "Digite a marca e o ano do seu carro: " << endl;
  cin >> marca >> ano;

  Carro novoCarro (marca, ano);
  novoCarro.displayMessage();

  return 0;
}