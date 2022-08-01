#include <iostream>
#include "PessoaJuridica.h"



PessoaJuridica::PessoaJuridica(){};


PessoaJuridica::PessoaJuridica(string nome, string cnpj, string razao ) : Pessoa(nome){
    setCnpj(cnpj);
    setRazao(razao);
};

void PessoaJuridica::setCnpj(string cpnj){
    this->cnpj = cpnj;
};

void PessoaJuridica::setRazao(string razao){
    this->razaos = razao;
};

string PessoaJuridica::getCnpj(){
    return this->cnpj;
};

string PessoaJuridica::getRazao(){
    return this->razaos;
};

