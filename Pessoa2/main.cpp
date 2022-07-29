#include "hub.h"

#include <iostream>
#include <string>

using std::cout; using std::endl; using std::cin;
using std::string; 
 
  
int main() {

    string nome = "Maria";
    string cpf = "123456789101";
    string razao = "xxxxx";
    string cpnj = "123456";

    Pessoa maria(nome);
    PessoaFisica mariaf(nome,cpf);
    PessoaJuridica mariaj(nome,cpnj,razao);

    maria.displayP();
    mariaf.displayF();
    mariaj.displayJ();
};