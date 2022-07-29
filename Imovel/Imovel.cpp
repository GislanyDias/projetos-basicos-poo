#include "Imovel.h"
#include <iostream>

using std::cout;
using std::endl;

Imovel::Imovel(string end, double preco){
    setEnd(end);
    setPreco(preco);

};

void Imovel::setEnd(string end){
    this -> end = end;
}

void Imovel::setPreco(double preco){
    this -> preco = preco;
};

string Imovel::getEnd(){
    return this -> end;
}

double Imovel::getPreco() const{
    return this->preco;
};

void Imovel::displayMessage() const {
    cout << "O preço é de " << getPreco() << endl;
};