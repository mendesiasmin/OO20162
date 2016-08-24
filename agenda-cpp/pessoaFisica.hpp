#ifndef FISICA_HPP
#define FISICA_HPP

#include <iostream>
#include <string>
#include "pessoa.hpp"

class PessoaFisica: public Pessoa{

private:
	string cpf;
	string rg;
	int idade;
public:

	string getCPF();
	string getRG();
	int getIdade();
	void setCPF(string cpf);
	void setRG(string rg);
	void setIdade(int idade);

};
#endif

