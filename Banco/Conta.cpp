#include "Conta.hpp"
#include <iostream>
#include <string>

//Implementação do construtor
/*Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular) {  
	this->numero = numero; //this é o membro da classe e o numero (direita) é o passado no parametro
	this->nomeTitular = nomeTitular;
	this->cpfTitular = cpfTitular;
	this->saldo = 0;
}*/

//Lista de inicialização     é mais otimizado pois inicializa os parametros apenas aqui e não na declaração
Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular) :    
	numero(numero), 
	nomeTitular(nomeTitular), //Também é possivel definir dessa forma
	cpfTitular(cpfTitular),   //evitando a utilização do this
	saldo(0) {
	verificaTamanhoNome();
	numeroContas++;
}

Conta::~Conta() {    //Implementação do destrutor
	numeroContas--;
}

int Conta::numeroContas = 0; //A atribuição de valor a um static em classe deve ser feito na implementação

void Conta::sacar(float valorASacar) {  //Implementando a definição do metodo criado na classe Conta
	if (valorASacar < 0) {
		std::cout << "Não é possivel sacar um valor negativo" << std::endl;
		return;
	}

	if (valorASacar > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar) {
	if (valorADepositar < 0) {
		std::cout << "Não é possivel depositar um valor negativo" << std::endl;
		return;
	}
	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const { //Metodo definido como const não pode alterar os atributos da classe
	return saldo;                    //É uma boa pratica definir como const metodos que não tem como proposito alterar
}                                    //qualquer atributo da classe, dessa forma ganhamos uma maior garantia

std::string Conta::recuperaNumeroConta() const {
	return numero;
}

std::string Conta::recuperaCpfTitular() const {
	return cpfTitular;
}

std::string Conta::recuperaNomeTitular() const {
	return nomeTitular;
}

/*void Conta::defineNumeroConta(std::string NumeroConta) {
	numero = NumeroConta;
}

void Conta::defineCpfTitular(std::string CpfTitular) {
	cpfTitular = CpfTitular;
}

void Conta::defineNomeTitular(std::string NomeTitular) {
	nomeTitular = NomeTitular;
}*/

int Conta::recuperanumeroContas() {   //Apesar de ser um membro static não precisa declarar o static na implementação
	return numeroContas;
}

void Conta::verificaTamanhoNome() {
	if (nomeTitular.size() < 5) {
		std::cout << "Nome muito curto" << std::endl;
		exit(1);
	}
}