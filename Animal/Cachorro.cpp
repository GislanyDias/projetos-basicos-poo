#include "Cachorro.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

Cachorro::Cachorro(string nome) : Animal(nome){

};

void Cachorro::Latir() const {
    cout << "AUuAU" << endl;
};