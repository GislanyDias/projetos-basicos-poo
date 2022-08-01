#include <iostream>
#include "Produto.h"


Produto::Produto(string nome, string categ, string valid){
    setNome(nome);
    setCate(categ);
    setVal(valid);
};

Produto::Produto(){
    
};

void Produto::setNome(string nome){
    this->nome =  nome;
};

void Produto::setCate(string categ){
    this->categoria = categ;
};

void Produto::setVal(string valid){
    this->validade =  valid;
};

string Produto::getNome(){
    return this->nome;
};

string Produto::getCateg(){
    return this->categoria;
};

string Produto::getVal(){
    return this->validade;
};