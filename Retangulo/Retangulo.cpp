#include <iostream>
#include "Retangulo.h"

using std::cout;
using std::endl;

Retangulo::Retangulo(double alt, double lar)
{
    setAltura(alt);
    setLargura(lar);
}

void Retangulo::setAltura(double alt)
{
    if (alt > 20.0 || alt < 0.0)
    {
        altura = 1;
    }
    else if(alt <= 20.0 && alt >= 0.0)
        altura = alt;
}

void Retangulo::setLargura(double lar)
{
    if (lar > 20.0 || lar < 0.0)
    {
        largura = 1;
    }
    else if(lar <= 20.0 && lar >= 0.0)
        largura = lar;

}

double Retangulo::getAltura()
{
    return altura;
}

double Retangulo::getLargura()
{
    return largura;
}

double Retangulo::calculaArea()
{

    double area;
    area = getAltura() * getLargura();
    return area;
}

double Retangulo::calculaPerimentro()
{
    double perimetro;
    perimetro = (getAltura() * 2) + (getLargura() * 2);
    return perimetro;
}

void Retangulo::DisplayMessage()
{
    cout << "Perímetro:" << calculaPerimentro() << endl << "Área:" << calculaArea() << endl;
}