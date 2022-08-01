#include <iostream>
#include "Cliente.h"


Cliente::Cliente(string nome, string cpf, string tele, string end) : PessoaFisica(nome, cpf){
    setTele(tele);
    setEnd(end);
};

void Cliente::setTele(string tele){
    this->telefone = tele;
};

void Cliente::setEnd(string end){
    this->endereco = end;
};

string Cliente::getTele(){
    return this->telefone;
};

string Cliente::getEnd(){
    return this->endereco;
}; 

