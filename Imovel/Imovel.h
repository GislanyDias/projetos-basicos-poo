#ifndef IMOVEL_H
#define IMOVEL_H

#include <string>
using std::string;

class Imovel
{

public:

    Imovel(string, double);

    void setEnd(string);
    void setPreco(double);

    string getEnd();
    double getPreco() const;

    void displayMessage() const;


protected:
    string end;
    double preco;


};





#endif