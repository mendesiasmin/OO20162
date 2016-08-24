#include "pessoaFisica.hpp"
#include <string>

using namespace std;

string PessoaFisica::getCPF(){
	return cpf;
}

string PessoaFisica::getRG(){
	return rg;
}

void PessoaFisica::setCPF(string cpf){
	this->cpf = cpf;
}

void PessoaFisica::setRG(string rg){
	this->rg = rg;
}

