#include <iostream>
#include <string>
#include "Func.h"

using std::cout; using std::endl; using std::cin;
using std::string; 
 
  
int main() {
  
  string nome;
  string sobrenome;
  double salario;

  cout << "Insira seu nome, sobrenome e salario mensal\n";
  cin >> nome >> sobrenome >> salario;

  Empregado funcionario(nome, sobrenome, salario);
  funcionario.displayMessage();

}

