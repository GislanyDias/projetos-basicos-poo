#ifndef CARRINHO_H
#define CARRINHO_H

#include <string>
#include "Produto.h"
using std::string;

class CarrinhoDeCompras : public Produto
{
    
public:
    CarrinhoDeCompras();

    void Armazenar(Produto);
    void Remover(string);
    void Listar();

private:
   Produto produtos[30];
   int nProd = 0;

};


#endif