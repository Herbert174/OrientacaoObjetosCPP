#pragma once
#include <string>
#include "Titular.h"

class Conta {           //Definindo uma class      por padrão todos os atributos de struct é public e de class é private
private:
	static int numeroContas;       //Um atributo static em uma classe refere-se a toda a classe e não só ao objeto

public:
	static int recuperanumeroContas();  //Função static refere-se a toda classe, não só ao objeto

private:  //Modificador de acesso
	std::string numero;
	Titular titular;
	//std::string nomeTitular;
	//std::string cpfTitular;           //Membro palavra que se refere ao atributo ou metodo de uma classe
	
protected:
	float saldo; //Valores iniciais é interessante colocar no construtor
	//short int tipoConta;

public:                        //Define que tudo abaixo se torne um atributo ou metodo public
	                           //até que outra definição explicitamente a mude ex. private:

	Conta(std::string numero, Titular titular);  //Definindo parametros dos construtores
	//Conta() = delete   dessa forma removemos o construtor padrão que é criado ao instanciar um objeto sem
	//                   definir um construtor proprio

	virtual ~Conta();       //~ + nome da classe para declarar um destrutor (um destrutor não recebe nenhum parametro)
	//se uma classe precisar ser armazenada na Heap (usar o new) e o mesmo precisar usar um destrutor
	//em uma classe derivada dela, é necessario o uso do virtual no destrutor na classe pai, para
	//garantir que ao limpar a variavel (usar o delete) os 2 ou mais destrutores sejam chamados

	void sacar(float valorASacar); //A propriedade virtual fica responsável por dizer ao compilador
	                                       //para verificar se o objeto em questão tem alguma variação
										   //desse método, caso tiver, execute essa variação
	void depositar(float valorADepositar);
	float recuperaSaldo() const;   //Declarando metodo como const

	std::string recuperaNumeroConta() const;
	std::string recuperaCpfTitular() const;
	std::string recuperaNomeTitular() const;
	virtual float taxaSaque() const = 0;       //O = 0 nesse caso indica para a classe que este metodo
											   //não possui implementação, nessa classe, mas terá
											   //nas classes que herdarem dela
											   //Um metodo virtual = 0 (sem implementação) é conhecido como
											   //metodo puramente virtual

	/*void defineNumeroConta(std::string NumeroConta);
	void defineCpfTitular(std::string CpfTitular);
	void defineNomeTitular(std::string NomeTitular);*/

//private:   //Metodos privados são bons para organizar nosso codigo internamente sem dar acesso para o externo
	//void verificaTamanhoNome();
};