#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(Cpf cpf, std::string nome):cpf(cpf), nome(nome) {
	verificaTamanhoNome();
}

void Pessoa::verificaTamanhoNome() {
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}

std::string Pessoa::recuperaCpfPessoa() const {
	return cpf.recuperaCpfPessoa();
}

std::string Pessoa::recuperaNomePessoa() const {
	return nome;
}
