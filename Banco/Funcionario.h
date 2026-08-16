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
	std::string recuperaNome() const;
	std::string recuperaCpf() const;
	virtual float bonificacao() const = 0; //Metodo puramente virtual
	float recuperaSalario() const;
};

