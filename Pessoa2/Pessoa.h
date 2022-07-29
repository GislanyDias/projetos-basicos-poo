#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;


class Pessoa
{    
public:

    Pessoa(string);
    void setNome(string);
    string getNome();

    void displayP();

protected:
    string nome;
    
};



#endif