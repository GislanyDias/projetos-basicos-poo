#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

using std::string;

class Animal
{
public:

    Animal();
    Animal(string nome);
    
    void Caminha() const;


protected:
    string raca;
    string nome;

};


#endif