#include <iostream>
#include "Pessoa.h"


Pessoa::Pessoa(string){
    setNome(nome);
};

Pessoa::Pessoa(){};

void Pessoa::setNome(string nome){
    this->nome = nome;
};

string Pessoa::getNome(){
    return this->nome;
};



