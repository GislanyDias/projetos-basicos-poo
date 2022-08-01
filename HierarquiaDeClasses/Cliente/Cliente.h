#ifndef CLIENTE_H
#define CLIENTE_H

#include "./Pessoas/PessoaFisica.h"
#include <string>
using std::string;

class Cliente : public PessoaFisica
{
    
public:
    Cliente(string, string, string, string); //nome, cpf, tele, end

    void setTele(string);
    void setEnd(string);

    string getTele();
    string getEnd();
    
private:
    string telefone;
    string endereco;
    
};


#endif