#include "pessoaFisica.hpp"
#include <string>

using namespace std;

string PessoaFisica::getCPF(){
	return cpf;
}

string PessoaFisica::getRG(){
	return rg;
}

int PessoaFisica::getIdade(){
	return idade;
}

void PessoaFisica::setCPF(string cpf){
	this->cpf = cpf;
}

void PessoaFisica::setRG(string rg){
	this->rg = rg;
}

void PessoaFisica::setIdade(int idade){
	this->idade = idade;
}
