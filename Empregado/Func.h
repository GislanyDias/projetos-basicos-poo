#ifndef FUNC_H
#define FUNC_H

#include <string>
using std::string;

//Interface
class Empregado
{

public:

    Empregado(string nome, string sobrenome, double salario);

    void setNomeEmpregado(string nome);

    void setSobEmpregado(string sobrenome);

    void setSalario(double salario);

    string getNome();

    string getSobrenome();

    double getSalario();

    void displayMessage();

private:
  string nome;
  string sobrenome;
  double salario;
};

#endif