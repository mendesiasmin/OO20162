#include "pessoaJuridica.hpp"
#include <string>

using namespace std;

string PessoaJuridica::getCNPJ(){
	return cnpj;
}

string PessoaJuridica::getNomeFantasia(){
	return nome_fantasia;
}

string PessoaJuridica::getEndereco(){
	return endereco;
}

void PessoaJuridica::setCNPJ(string cnpj){
	this->cnpj = cnpj;
}

void PessoaJuridica::setNomeFantasia(string nome){
	this->nome_fantasia = nome;
}

void PessoaJuridica::setEndereco(string endereco){
	this->endereco = endereco;
}
