#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(Conta& conta) {
	cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main() {
	Conta umaConta("123", "Herbert", "12345678910");   //Instanciando uma struct
	Conta umaOutraConta("321", "Santos", "01987654321");

	/*umaConta.defineNumeroConta("123");
	umaConta.defineCpfTitular("12345678910");
	umaConta.defineNomeTitular("Geraldo");*/
	umaConta.sacar(50);

	/*umaOutraConta.defineNumeroConta("321");
	umaOutraConta.defineCpfTitular("01987654321");
	umaOutraConta.defineNomeTitular("Robson");*/
	umaOutraConta.depositar(500);
	
	cout << "uma Conta: numero da conta: " << umaConta.recuperaNumeroConta() << " CPF do titular: " << umaConta.recuperaCpfTitular();
	cout << " Nome do titular: " << umaConta.recuperaNomeTitular() << endl;
	cout << "uma outra Conta: numero da conta: " << umaOutraConta.recuperaNumeroConta() << " CPF do titular: " << umaOutraConta.recuperaCpfTitular();
	cout << " Nome do titular: " << umaOutraConta.recuperaNomeTitular() << endl;

	cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra conta: " << umaOutraConta.recuperaSaldo() << endl;

	return 0;
}