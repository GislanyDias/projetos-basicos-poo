#include <iostream>
#include "Data.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    int dia, mes, ano;

    cout << "Digite o dia: \n";
    cin >> dia;

    cout << "Digite o número do mes: \n";
    cin >> mes;

    cout << "Digite o ano: \n";
    cin >> ano;

    Data novaData(dia, mes, ano);
    novaData.displayMessage();

    return 0;


}