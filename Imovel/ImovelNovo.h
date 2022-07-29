#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include "Imovel.h"

class ImovelNovo: public Imovel
{
    
public:

    ImovelNovo(string, double);

    void setPreco();
    double getPreco();


};

#endif