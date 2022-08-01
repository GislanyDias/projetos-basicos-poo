#include <iostream>
#include "Carrinho.h"
using std::cout;
using std::endl;

CarrinhoDeCompras::CarrinhoDeCompras(){

};

void CarrinhoDeCompras::Armazenar(Produto produto){
    if (nProd < 30){
        produtos[nProd] = produto;
        nProd ++;
    };
};

void CarrinhoDeCompras::Remover(string nome){
    for (int i = 0; i < nProd; i++){
        if (nome == produtos[i].getNome()){
            Produto pro;
            produtos[i] = pro;
            nProd -=1;
            for (int j = i; i <nProd; i++){
                produtos[i] =  produtos[i+1];
            };
        };
    };
};

void CarrinhoDeCompras::Listar(){
    for (int i = 0; i < nProd; i++){
        if (produtos[i].getNome() != ""){
            cout << "------- Mercadinho Dois Irmãos -------" << endl;
            cout << "Produto: " << produtos[i].getNome() << endl;
            cout << "Categoria: " << produtos[i].getCateg() << endl;
            cout << "Validade: " << produtos[i].getVal() << endl;
            cout << "\n";
        };
    };
};