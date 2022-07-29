#include <iostream>
#include "Animal.h"

using std::cout; 
using std::endl;

Animal::Animal(){

};

Animal::Animal(string nome){
    this -> nome = nome;

};

void Animal::Caminha() const{

    cout << "Olá, meu nome é " << nome << "e estou caminhando" <<endl;

}