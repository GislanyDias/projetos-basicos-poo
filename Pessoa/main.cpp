#include "Pessoa.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std:: endl;
using std:: string;

int main() {
  
  string nome;
  int idade;
  double altura;

  cout << "Digite seu nome: " << endl;
  cin >> nome;
  cout << "Digite sua idade: "<<endl;
  cin >> idade;
  cout << "Digite sua altura: "<< endl;
  cin >> altura;

  Pessoa novaPessoa(nome,idade,altura);
  novaPessoa.displayMessage();

  return 0;
}