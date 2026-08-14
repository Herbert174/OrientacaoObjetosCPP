#include "Funcionario.h"

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario) : Pessoa(cpf, nome), salario(salario) {

}

std::string Funcionario::recuperaNome() {
	return this->Pessoa::nome;               //Necessario para especificar de onde você quer recuperar o atributo quando
} //return Pessoa::nome; também é valido     //a classe tiver um atributo de mesmo nome de um atributo herdado

std::string Funcionario::recuperaCpf() {
	return cpf.recuperaCpfPessoa();
}
