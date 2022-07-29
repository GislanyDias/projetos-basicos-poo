#ifndef PESSOAF_H
#define PESSOAF_H

#include <string>
#include "Pessoa.h"
using std::string;

class PessoaFisica : public Pessoa
{
   
public:
    PessoaFisica(string,string);
    void setCpf(string);
    string getCpf();

    void displayF();

private:
    string cpf;

};

#endif