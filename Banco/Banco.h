#ifndef BANCO_H
#define BANCO_H

#include <string>
using std::string;

//Interface
class ContaBanco
{

public:

  ContaBanco(string nome, string cpf, double saldo);

  void setNomeCliente(string nome);

  void setCpfCliente(string cpf);

  void setSaldo(double saldo);

  void setDeposito(double deposito);

  void setSaque (double saque);

  double getSaldo();

  void displayMessage();

private:
  string nome;
  string cpf;
  double saldo;
};

#endif