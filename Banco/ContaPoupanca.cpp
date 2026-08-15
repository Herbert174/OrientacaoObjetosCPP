#include <iostream>
#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular) : Conta (numero, titular){

}

ContaPoupanca::~ContaPoupanca() {
	std::cout << "Destrutor da conta poupanca" << std::endl;
}

float ContaPoupanca::taxaSaque() const {
	std::cout << "Chamando Metodo Conta Poupanca" << std::endl;
	return 0.03;
}

/*void ContaPoupanca::sacar(float valorASacar) {
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
	std::cout << "O saldo da conta poupanca e : " << saldo << std::endl;
}*/
