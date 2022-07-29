#include "ImovelNovo.h"
#include <iostream>
#include <string>

using std::string;

ImovelNovo::ImovelNovo(string end, double preco) : Imovel(end, preco){
    setPreco();
};

void ImovelNovo::setPreco(){
    this->preco *= 1.1;  //adicional de 10%
}

double ImovelNovo::getPreco(){
    return this->preco;
}