#include <iostream>
using std::cout;
using std::endl;

//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
#include <ctime>
using std::setfill; 
using std::setw;

#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}

void Time::printUniversal () const
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard () const
{
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}

//Função tick que adiciona 1 segundo no horário 
void Time::tick()
{
    this -> second += 1;
    if (this -> second == 60)
    {
        this -> second = 0;
        this -> minute += 1;

        if (this -> minute == 60)
        {
            this -> minute = 0;
            this -> hour += 1;

            if (this -> hour == 24){
              this -> hour = 0;
            }
        }
    }

    printUniversal();
}
