#include "Pessoa.h"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std:: endl;
using std:: string;

Pessoa::Pessoa(string nome, int idade, double altura){
  setNome(nome);
  setIdade(idade);
  setAltura(altura);
}

void Pessoa::displayMessage() const{
  cout << "Olá, eu sou " << getNome() << " tenho " << getIdade() << " anos e " << getAltura() << " de altura!" <<endl;
};