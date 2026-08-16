#include <iostream>
#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(std::string numero, Titular titular) : Conta(numero, titular) {

}

ContaCorrente::~ContaCorrente() {
	std::cout << "Destrutor da Conta Corrente" << std::endl;
}

float ContaCorrente::taxaSaque() const {
	std::cout << "Chamando metodo Conta Corrente" << std::endl;
	return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, float valor) {
	sacar(valor);
	destino.depositar(valor);
}