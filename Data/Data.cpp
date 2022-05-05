#include <iostream>
#include "Data.h"

using std::cin;
using std::cout;
using std::endl;

Data::Data(int dia, int mes, int ano)
{
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

void Data::setDia(int dia)
{
    this->dia = dia;
}

void Data::setMes(int mes)
{

    if (mes < 1 || mes > 12)
        this->mes = 1;
    else
        this->mes = mes;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}

int Data::getDia()
{
    return this->dia;
}

int Data::getMes()
{
    return this -> mes;
}

int Data::getAno()
{
    return this->ano;
}

void Data::displayMessage()
{
    cout << "A data é de " << getDia() << "/" << getMes() << "/" << getAno() << endl;
}
