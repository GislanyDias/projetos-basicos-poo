#ifndef DATA_H
#define DATA_H


//Interface
class Data
{
public:
    Data(int dia, int mes, int ano);

    void setDia(int dia);

    void setMes(int mes);

    void setAno(int ano);

    int getDia();

    int getMes();

    int getAno();

    void displayMessage();

private:
    int dia;
    int mes;
    int ano;
};

#endif