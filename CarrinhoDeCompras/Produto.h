#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using std::string;

class Produto{
    
public:

    Produto();
    Produto(string, string, string); //nome, categ, validade

    void setNome(string);
    void setCate(string);
    void setVal(string);

    string getNome();
    string getCateg();
    string getVal();
    

private:
    string nome;
    string categoria;
    string validade;

};


#endif