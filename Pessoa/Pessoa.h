#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using std::string;

class Pessoa{
  
public:

  Pessoa(){};
  Pessoa(string nome, int idade, double altura);

  void setNome(string nome) {this -> nome = nome;}
  void setIdade(int idade) {this -> idade = idade;}
  void setAltura(double altura) {this -> altura = altura;}

  string getNome() const{return this -> nome;}
  int getIdade() const {return this -> idade;}
  double getAltura() const {return this -> altura;}

  void displayMessage() const;
  
private:
  string nome;
  int idade;
  double altura;
  
};

#endif 