//impede que múltiplas inclusões ocorram
#ifndef TIME_H
#define TIME_H

#include <ctime>

class Time 
{
public:
    Time( int, int = 0 , int = 0); //construtor
    Time(); //construtor sobrecarregado sem parametros

    //funções set
    void setTime(int , int, int); //protótipo

    //forma 1
    inline void setHour( int );

    //forma 2 - ver arquivo cpp
    void setMinute( int );

    //forma 3
    void setSecond( int s )
    {
    second = (s >= 0 && s < 60) ? s : 0;
    }
    //Função tick que adiciona 1 segundo no horário 
    void tick();

    //funções get

    //forma 4
    inline int getHour() const {return hour;}
    inline int getMinute() const {return minute;}
    inline int getSecond() const {return second;}

    void printUniversal() const;
    void printStandard() const;

private:
    int hour;
    int minute;
    int second;
};

#endif