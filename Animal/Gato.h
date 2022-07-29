#ifndef GATO_H
#define GATO_H

#include "Animal.h"
#include <iostream>
#include "string"


class Gato: public Animal
{

public:
    Gato(string);
    void Mia() const;

private:

};

#endif