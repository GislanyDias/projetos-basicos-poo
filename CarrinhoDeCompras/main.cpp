#include <iostream>
#include "Carrinho.h"

using std::cout;

int main(){

    Produto prod1("Flocão", "Comida", "12/12/2022");
    Produto prod2("Café", "Bebida", "12/12/2023");
    Produto prod3("Arroz", "Comida", "02/03/2023");
    Produto prod4("Macarrão", "Comida", "23/04/2023");
    Produto prod5("Açaí", "Comida", "03/01/2023");

    CarrinhoDeCompras compras;
    compras.Armazenar(prod1);
    compras.Armazenar(prod2);
    compras.Armazenar(prod3);
    compras.Armazenar(prod4);
    compras.Armazenar(prod5);

    compras.Listar();

    compras.Remover(prod3.getNome());
    compras.Remover(prod4.getNome());

    compras.Listar();


    return 0;
}