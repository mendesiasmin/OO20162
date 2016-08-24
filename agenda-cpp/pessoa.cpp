#include "pessoa.hpp"
#include <string>

using namespace std;

Pessoa::Pessoa(){
 nome= "";
 telefone="";
}


Pessoa::Pessoa(string nome, string telefone){
	this->nome = nome;
	this->telefone = telefone;
}

string Pessoa::getNome(){
	return nome;
}


void Pessoa::setNome (string nome){
	this->nome = nome;
}

string Pessoa:: getTelefone(){
	return telefone;
}

void Pessoa::setTelefone( string telefone){
	this->telefone = telefone;
} 
