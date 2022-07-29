#ifndef AGENDA_H
#define AGENDA_H


#include <string>
#include <vector>
#include <iostream>
#include "../Pessoa/Pessoa.h"

using std::string;


class Agenda
{
public:

    ~Agenda();
    Agenda(int tpessoas = 1);

    inline int tamanhoArray() const;
    
    void armazenaPessoa(string, int, double);
    void armazenaPessoa(Pessoa);
    void removePessoa(string);
    int buscaPessoa(string) const;
    void imprimePovo() const;
    void imprimePessoa(int &) const;

private:
    int numPessoas = 0;
    Pessoa *pessoas;

};

#endif