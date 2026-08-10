#pragma once
#include <string>

class Conta {           //Definindo uma class      por padrão todos os atributos de struct é public e de class é private
private:  //Modificador de acesso
	std::string numero;
	std::string nomeTitular;
	std::string cpfTitular;           //Membro palavra que se refere ao atributo ou metodo de uma classe
	
	float saldo; //Valores iniciais é interessante colocar no construtor

public:                        //Define que tudo abaixo se torne um atributo ou metodo public
	                           //até que outra definição explicitamente a mude ex. private:

	Conta(std::string numero, std::string nomeTitular, std::string cpfTitular);  //Definindo parametros dos construtores
	//Conta() = delete   dessa forma removemos o construtor padrão que é criado ao instanciar um objeto sem
	//                   definir um construtor proprio

	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;   //Declarando metodo como const

	std::string recuperaNumeroConta() const;
	std::string recuperaCpfTitular() const;
	std::string recuperaNomeTitular() const;

	/*void defineNumeroConta(std::string NumeroConta);
	void defineCpfTitular(std::string CpfTitular);
	void defineNomeTitular(std::string NomeTitular);*/
};