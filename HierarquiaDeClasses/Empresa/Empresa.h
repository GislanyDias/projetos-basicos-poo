#ifndef EMPRESA_H
#define EMPRESA_H

#include "./Funcionario/Funcionario.h"
#include "./Cliente/Cliente.h"
#include "./Pessoas/PessoaJuridica.h"
#include <string>

using std::string;


class Empresa : public PessoaJuridica
{
    
public:
    Empresa();
    Empresa(string, string, string); //nome, razao social e cpnj


private:
    Funcionario funcionarios[10]; //array fun
    Cliente clientes[10]; //array clientes

};


#endif