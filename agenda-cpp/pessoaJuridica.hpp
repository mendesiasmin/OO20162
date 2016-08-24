#ifndef JURIDICA_HPP
#define JURIDICA_HPP

#include <iostream>
#include <string>
#include "pessoa.hpp"

class PessoaJuridica: public Pessoa{

private:
	string cnpj;
	string nome_fantasia;
	string endereco;

public:
	string getCNPJ();
	string getNomeFantasia();
	string getEndereco();
	void setCNPJ(string cnpj);
	void setNomeFantasia(string nome);
	void setEndereco(string endereco);
};
#endif
