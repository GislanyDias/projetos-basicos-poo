#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using std::string;

class Pessoa
{

public:
    Pessoa(string, string);
    void setNome(string &);
    void setCpf(string &);
    inline string getNome(){return nome;}
    inline string getCpf() {return cpf;}

    bool numerosIguais();
    bool validaDigito1();
    bool validaDigito2();
    bool validaCpf();

private:
    string nome;
    string cpf;
    bool cpfValido = false;
    bool iguais = false;
};

#endif