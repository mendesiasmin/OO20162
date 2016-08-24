#include <iostream>
#include "pessoaFisica.hpp"
#include "pessoaJuridica.hpp"

using namespace std;

int main (){

	PessoaFisica pessoa;

	pessoa.setNome("Paulo");
	pessoa.setTelefone("555-55555");

	cout << "Nome: " << pessoa.getNome() << endl;
	cout << "Telefone: " << pessoa.getTelefone() << endl;

	return 0;

}
