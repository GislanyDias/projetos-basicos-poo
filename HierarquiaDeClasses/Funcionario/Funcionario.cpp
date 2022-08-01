#include <iostream>
#include "Funcionario.h"


Funcionario::Funcionario(){

};


Funcionario::Funcionario(string nome, string cpf, string matri, double salario) : PessoaFisica(nome,cpf){
    setMatri(matri);
    setSalario(salario);
};

void Funcionario::setMatri(string matri){
    this->matricula = matri;
};

void Funcionario::setSalario(double salario){
    this->salario = salario;
};

string Funcionario::getMatri(){
    return this->matricula;
};

double Funcionario::getSalario(){
    return this->salario;
};



