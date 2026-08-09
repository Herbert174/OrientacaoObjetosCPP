#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main() {
	Conta umaConta;   //Instanciando uma struct

	umaConta.numero = "123456";
	umaConta.cpfTitular = "123.456.789-10";
	umaConta.nomeTitular = "Herbert";
	umaConta.saldo = 100;

	Conta umaOutraConta;
	umaOutraConta.saldo = 200;

	umaOutraConta.depositar(500);
	umaConta.sacar(50);

	cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << umaOutraConta.saldo << endl;

	return 0;
}