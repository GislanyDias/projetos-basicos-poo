#include <iostream>
#include "Cupom.h"

using std::cout; 
using std::endl;


Cupom::Cupom(string id, string des, int qntd, float preco)
{
    setId(id);
    setDes(des);
    setQntd(qntd);
    setPreco(preco);
};

void Cupom::setId(string id)
{
    this -> id = id;
}

void Cupom::setDes(string des)
{
    this -> des = des;
};

void Cupom::setQntd(int qntd)
{
    if (qntd <0)
        this -> qntd = 0;
    else
        this -> qntd = qntd;
}

void Cupom::setPreco(float preco)
{
    if (preco < 0)
        this -> preco = 0;
    else
        this -> preco = preco;
}

string Cupom::getId()
{
    return this -> id;
}

string Cupom::getDes()
{
    return this -> des;
}

int Cupom::getQntd()
{
    return this -> qntd;
}

float Cupom::getPreco()
{
    return this -> preco;
}

float Cupom::calculaCupom()
{
    return getPreco() * getQntd();
}

void Cupom::displayMessage()
{
    cout << "O valor das suas compras foi de: R$ " << calculaCupom() << endl;
}



