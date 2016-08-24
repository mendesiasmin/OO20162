#ifndef FISICA_HPP
#define FISICA_HPP

#include <iostream>
#include <string>
#include "pessoa.hpp"

class PessoaFisica: public Pessoa{

private:
	string cpf;
	string rg;

public:

	string getCPF();
	string getRG();
	void setCPF(string cpf);
	void setRG(string rg);

};
#endif

