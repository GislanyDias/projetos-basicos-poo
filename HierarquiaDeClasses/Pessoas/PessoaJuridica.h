#ifndef PESSOAJ_H
#define PESSOAJ_H

#include "Pessoa.h"
#include <string>
using std::string;

class PessoaJuridica : public Pessoa
{
public:

    PessoaJuridica();
    PessoaJuridica(string, string, string);

    void setCnpj(string);
    void setRazao(string);

    string getCnpj();
    string getRazao();

protected:
    string cnpj;
    string razaos;

    
};


#endif