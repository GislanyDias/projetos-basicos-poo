#include "ImovelVelho.h"
#include <iostream>
#include <string>

using std::string;

ImovelVelho::ImovelVelho(string end, double preco) : Imovel(end, preco){
    setPreco();
};

void ImovelVelho::setPreco(){
    this->preco *= 0.9; //desconto de 10%
}

double ImovelVelho::getPreco(){
    return this -> preco;
}