#ifndef RETANGULO_H
#define RETANGULO_H

//Interface
class Retangulo
{
    
public:

    Retangulo(double = 1, double = 1);

    void setAltura(double);
    void setLargura(double);

    double getAltura();
    double getLargura();

    void DisplayMessage();

    
private:
    double altura;
    double largura;

    double calculaPerimentro();
    double calculaArea();
};

#endif