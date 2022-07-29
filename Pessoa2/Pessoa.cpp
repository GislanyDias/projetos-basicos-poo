#include "Pessoa.h"
#include <iostream>

using std::cout;
using std::endl;

Pessoa::Pessoa(string nome){
    setNome(nome);
};

void Pessoa::setNome(string nome){
    this->nome= nome;
};

string Pessoa::getNome(){
    return this->nome;
};

void Pessoa::displayP(){
    cout << "Olá meu nome é: " << getNome() << endl;
};

