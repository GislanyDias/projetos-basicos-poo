#include <iostream>
#include "Carro.h"

using std::cout; 
using std::endl;



Carro::Carro(string nome, int ano)
{ 
  setMarca(nome);
    setAno(ano);
}

void Carro::setMarca(string nome)
{ 
  if (nome == "")
    marca = "\"Sem Marca\"";
  else if (nome.length() > 10)
    marca = nome.substr(0,10);
  else
    marca = nome;
}

string Carro::getMarca()
{
  return marca;
}

void Carro::setAno(int ano)
{
    if (ano == 0 || ano > 2023)
        cout << "---- Ano inválido ----" << endl;
    else 
        this->ano = ano;
}

int Carro::getAno()
{
    return ano;
}

void Carro::displayMessage()
{
  std::cout << "Olá, eu sou um carro da marca " << getMarca() << " e do ano " << getAno()<<endl;
}