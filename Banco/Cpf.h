#pragma once
#include <string>

class Cpf
{
protected: 
	std::string cpf;

public:
	Cpf(std::string cpf);              
	//explicit Cpf(std::string cpf);            explicit é uma propriedade que impede conversões implicitas da classe
	std::string recuperaCpfPessoa() const;

};

