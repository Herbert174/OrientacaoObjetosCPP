#pragma once
#include <string>
#include "Cpf.h"

class Titular
{
private:
	Cpf cpf;                //Adicionando uma composição de classes onde Cpf é uma classe criada que compõe Titular
	std::string nome;

public:
	Titular(Cpf cpf, std::string nome);
	std::string recuperaCpfTitular() const;
	std::string recuperaNomeTitular() const;

private:
	void verificaTamanhoNome();
};

