#include "Gato.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

Gato::Gato(string nome) : Animal(nome){

};

void Gato::Mia()const{
    cout << "Miaau" << endl;
}