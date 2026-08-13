#include "Funcionario.h"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario) : Pessoa(cpf, nome), salario(salario) {

}

std::string Funcionario::recuperaNome() {
	return nome;
}

std::string Funcionario::recuperaCpf() {
	return cpf.recuperaCpfPessoa();
}
