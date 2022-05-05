#include <iostream>
#include <string>
#include "Banco.h"

using std::cout; using std::endl; using std::cin;
using std::string; 
 
  
int main() {
  
  char opcao;
  
  string nome;
  string cpf;
  double saldo;
  double saque;
  double deposito;

  cout << "Insira seu nome, cpf e o saldo inicial da conta\n";
  cin >> nome >> cpf >> saldo;
  ContaBanco user( nome,  cpf,  saldo);

  cout << "--- Escolha sua opção ----" << endl << "[S] Saque\n" << "[D] Deposito\n" << "[O] Saldo\n";
  cin >> opcao;
  
  if (opcao == 'S')
  {
    cout << "Insira o valor do saque: " << endl;
    cin >> saque;
    user.setSaque(saque);
  }

  else if (opcao == 'D')
  {
    cout << "Insira o valor do deposito: " << endl;
    cin >> deposito;
    user.setDeposito(deposito);
  }

  else if (opcao == 'O')
  {
    cout << "Seu saldo é de: " << endl;
    user.displayMessage();
  }
  
  return 0;
}

