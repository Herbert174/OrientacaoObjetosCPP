#pragma once
#include <string>
#include "Pessoa.h"
#include "Autenticavel.h"
#include "Cpf.h"

class Titular:public Pessoa, public Autenticavel    // Dessa forma dizemos que Titular herda de Pessoa e Autenticavel
{
public:
	Titular(Cpf cpf, std::string nome, std::string senha);
};

