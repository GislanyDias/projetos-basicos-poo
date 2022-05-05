#include <iostream>
#include <string>
#include "Cupom.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string id;
    string des;
    int qntd;
    float preco;

    cout << "insira o id do seu produto: " << endl;
    cin >> id;

    cout<< "Insira a descrição do produto da sua compra: " << endl;
    cin>> des;

    cout << "Insira a quantidade de produtos: "<<endl;
    cin>>qntd;

    cout<<"Insira o preço unitário de cada produto: " << endl;
    cin>>preco;

    Cupom novaCompra(id,des,qntd,preco);
    novaCompra.displayMessage();
    

    return 0;
}
