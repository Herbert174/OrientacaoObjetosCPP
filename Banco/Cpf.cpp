#include "Cpf.h"

Cpf::Cpf(std::string cpf) : cpf(cpf) {
	//Validação hipotetica do CPF no construtor
}

std::string Cpf::recuperaCpfPessoa() const{
	return cpf;
}
