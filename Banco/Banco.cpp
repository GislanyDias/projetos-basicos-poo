#include <iostream>
#include "Banco.h"

using std::cout;
using std::endl;

ContaBanco::ContaBanco(string nome, string cpf, double saldo)
{
    setNomeCliente(nome);
    setCpfCliente(cpf);
    setSaldo(saldo);
}


void ContaBanco::setNomeCliente(string nome)
{
    if (nome.size() < 1)
        this -> nome = "Nome indefinido";
    else
        this -> nome = nome;
}

void ContaBanco::setCpfCliente(string cpf)
{
    if (cpf.size() <= 1)
        this -> cpf = "Cpf Inválido";
    else
        this -> cpf = cpf;
}

void ContaBanco::setSaldo(double saldo)
{
    if (saldo <= 0)
        this -> saldo = 0;
    else
        this -> saldo = saldo;
}

void ContaBanco::setDeposito(double deposito)
{
    if (deposito <=0 )
        this -> saldo = saldo;
    else 
        this -> saldo += deposito;
}

void ContaBanco::setSaque(double saque)
{
    if (saque > saldo)
        cout << "Valor de saque maior do que o valor disponivel na conta";
    else 
        this -> saldo -= saque;
}

double ContaBanco::getSaldo()
{
    return saldo;
}

void ContaBanco::displayMessage()
{
    std:: cout << "Olá, sua conta foi criada e seu saldo é de: " << getSaldo() << endl;
}


