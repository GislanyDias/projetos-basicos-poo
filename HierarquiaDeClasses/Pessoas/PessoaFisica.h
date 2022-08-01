#ifndef PESSOAF_H
#define PESSOAF_H

#include "Pessoa.h"
#include <string>
using std::string;

class PessoaFisica : public Pessoa
{
public:

    PessoaFisica();
    PessoaFisica(string, string);

    void setCpf(string);
    string getCpf();

protected:
    string cpf;
    
};


#endif