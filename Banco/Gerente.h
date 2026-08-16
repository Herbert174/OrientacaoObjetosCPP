#pragma once
#include "Funcionario.h"

class Gerente final : public Funcionario {
public: 
	Gerente(Cpf cpf, std::string nome, float salario);
	float bonificacao() const;
};

