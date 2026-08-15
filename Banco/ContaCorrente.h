#pragma once
#include "Conta.hpp"

class ContaCorrente final : public Conta
{
public: 
	ContaCorrente(std::string numero, Titular titular);
	~ContaCorrente();
	float taxaSaque() const override;

};

