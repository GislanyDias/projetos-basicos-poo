
#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"
#include <string>
#include <iostream>

using std::ostream;
using std::string;


class Cachorro : public Animal
{
public:

    Cachorro(string);
    void Latir() const;
    
private:
    
};




#endif
