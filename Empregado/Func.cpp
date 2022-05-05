#include <iostream>
#include "Func.h"

using std::cout;
using std::endl;


Empregado::Empregado(string nome, string sobrenome, double salario)
{
    setNomeEmpregado(nome);
    setSobEmpregado(sobrenome);
    setSalario(salario);

}

void Empregado::setNomeEmpregado(string nome)
{
    this -> nome = nome;
}

void Empregado::setSobEmpregado(string sobrenome)
{
    this -> sobrenome = sobrenome;
}

void Empregado::setSalario(double salario)
{

    if (salario < 0)
        this -> salario = 0;
    else
        this -> salario = 1.10 * salario;
}

string Empregado::getNome()
{
    return this -> nome;
}

string Empregado::getSobrenome()
{
    return this -> sobrenome;
}

double Empregado::getSalario()
{
    return this -> salario;
}

void Empregado::displayMessage()
{
    cout << "Seu novo salario é de: " << getSalario(); 
}

