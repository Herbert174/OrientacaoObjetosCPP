#include <iostream>
#include "Titular.h"

Titular::Titular(Cpf cpf, std::string nome):
	cpf(cpf), nome(nome) {
	verificaTamanhoNome();
}

void Titular::verificaTamanhoNome() {
	if (nome.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}

std::string Titular::recuperaCpfTitular() const {
	return cpf.recuperaCpfTitular();
}

std::string Titular::recuperaNomeTitular() const {
	return nome;
}