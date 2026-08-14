#include <iostream>
#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta (numero, titular){

}

void ContaPoupanca::sacar(float valorASacar) {  //Implementando a definição do metodo criado na classe Conta
	if (valorASacar < 0) {
		std::cout << "Não é possivel sacar um valor negativo" << std::endl;
		return;
	}

	float tarifaSaque = valorASacar * 0.03;
	float valorSaque = valorASacar + tarifaSaque;

	if (valorSaque > saldo) {
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}
	saldo -= valorSaque;
}