#ifndef PESSOA_H
#define PESSOA_H


#include <string>
using std::string;

class Pessoa
{
public:
    Pessoa();
    Pessoa(string);

    void setNome(string);
    string getNome();

protected:
    string nome;
};


#endif