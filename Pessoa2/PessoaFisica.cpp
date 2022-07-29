#include "PessoaFisica.h"
#include "../Pessoa2/Pessoa.h"
#include <iostream>

using std::cout;
using std::endl;

PessoaFisica::PessoaFisica(string nome, string cpf) : Pessoa(nome){
    setCpf(cpf);
};

void PessoaFisica::setCpf(string cpf){
    this->cpf=cpf;
};

string PessoaFisica::getCpf(){
    return this->cpf;
};

void PessoaFisica::displayF(){
    cout << "Meu nome é: " << getNome() << " e meu CPF é: " << getCpf() << endl;
};