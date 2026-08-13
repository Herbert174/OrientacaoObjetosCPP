#pragma once
#include <string>
#include "Cpf.h"

class Pessoa
{
protected:       //Dessa forma as classes que herdarem de Pessoa também terão acesso a essa propriedade
	Cpf cpf;             //Adicionando uma composição de classes onde Cpf é uma classe criada que compõe Titular
	std::string nome;

public:
	Pessoa(Cpf cpf, std::string nome);
	std::string recuperaCpfPessoa() const;
	std::string recuperaNomePessoa() const;

private:
	void verificaTamanhoNome();
};

