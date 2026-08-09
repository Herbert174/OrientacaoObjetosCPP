#pragma once
#include <string>

class Conta {           //Definindo uma class      por padrão todos os atributos de struct é public e de class é private
private:  //Modificador de acesso
	std::string numero;
	std::string cpfTitular;           //Membro palavra que se refere ao atributo ou metodo de uma classe
	std::string nomeTitular;
	float saldo = 0;

public:                        //Define que tudo abaixo se torne um atributo ou metodo public
	                           //até que outra definição explicitamente a mude ex. private:
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;   //Declarando metodo como const

	std::string recuperaNumeroConta();
	std::string recuperaCpfTitular();
	std::string recuperaNomeTitular();

	void defineNumeroConta(std::string NumeroConta);
	void defineCpfTitular(std::string CpfTitular);
	void defineNomeTitular(std::string NomeTitular);
};