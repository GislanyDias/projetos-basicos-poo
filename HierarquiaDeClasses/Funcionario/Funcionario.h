#ifndef FUNC_H
#define FUNC_H

#include "./Pessoas/PessoaFisica.h"
#include <string>
using std::string;

class Funcionario : public PessoaFisica
{
    
public:
    Funcionario();
    Funcionario(string, string, string, double); //nome, cpf, matricula, salario

    void setMatri(string);
    void setSalario(double);

    string getMatri();
    double getSalario();
    
private:
    string matricula;
    double salario;

};


#endif