#pragma once
#include <string>
#include "Pessoa.h"
#include "Cpf.h"

class Titular:public Pessoa    // Dessa forma dizemos que Titular herda de Pessoa
{
public:
	Titular(Cpf cpf, std::string nome);
};

