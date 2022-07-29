#include "PessoaJuridica.h"
#include "../Pessoa2/Pessoa.h"
#include <iostream>

using std::cout;
using std::endl;

PessoaJuridica::PessoaJuridica(string nome, string cpnj, string rsocial) : Pessoa(nome){
    setCnpj(cpnj);
    setRazaoS(rsocial);
};

void PessoaJuridica::setCnpj(string cpnj){
    this->cnpj=cpnj;
};

void PessoaJuridica::setRazaoS(string rsocial){
    this->rsocial = rsocial;
};

string PessoaJuridica::getCpnj(){
    return this->cnpj;
}

string PessoaJuridica::getRazaoS(){
    return this->rsocial;
};

void PessoaJuridica::displayJ(){
    cout<<"Meu CPNJ é: " << getCpnj() << "minha razao social: " << getRazaoS() << " e meu nome é: " << getNome() << endl;
};


