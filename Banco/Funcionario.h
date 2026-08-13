#pragma once
#include <string>
#include "Pessoa.h"
#include "Cpf.h"

class Funcionario : public Pessoa  // Dessa forma dizemos que Funcionario herda de Pessoa
{
private:
	float salario;

public:
	Funcionario(Cpf cpf, std::string nome, float salario);
	std::string recuperaNome();
	std::string recuperaCpf();
};

