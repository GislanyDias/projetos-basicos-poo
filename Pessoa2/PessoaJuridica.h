#ifndef PESSOAj_H
#define PESSOAJ_H

#include <string>
#include "Pessoa.h"
using std::string;


class PessoaJuridica : public Pessoa
{
   
public:
    PessoaJuridica(string, string, string);

    void setCnpj(string);
    void setRazaoS(string);

    string getCpnj();
    string getRazaoS();

    void displayJ();

private:
    string cnpj;
    string rsocial;

};


#endif