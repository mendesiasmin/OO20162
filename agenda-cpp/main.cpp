#include <iostream>
#include "pessoaFisica.hpp"
#include "pessoaJuridica.hpp"
#include "pessoaFisica.cpp"
#include "pessoaJuridica.cpp"

using namespace std;

int main (){

	PessoaFisica::pessoa;
	PessoaJuridica::empresa;

pessoa.setNome("Paulo");
pessoa.setIdade("32");
pessoa.setTelefone("555-55555");

cout << "Nome: " << outraPessoa.getNome() << endl;
cout << "Idade: " << outraPessoa.getIdade() << endl;
cout << "Telefone: " << outraPessoa.getTelefone() << endl;

return 0;

}
