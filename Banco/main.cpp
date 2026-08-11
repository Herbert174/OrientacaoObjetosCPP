#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(Conta& conta) {
	Conta contadesnecessario("123", "Joaozinho", "12345678910");
	cout << "O saldo da conta e : " << conta.recuperaSaldo() << endl;
}

int main() {
	Conta umaConta("123", "Herbert", "12345678910");   //Instanciando uma struct
	Conta umaOutraConta("321", "Santos", "01987654321");
	Conta terceiraConta("456", "Ana", "12398745601");

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

	//cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra conta: " << umaOutraConta.recuperaSaldo() << endl;
	ExibeSaldo(umaConta);
	ExibeSaldo(umaOutraConta);

	cout << "Numero de contas " << Conta::recuperanumeroContas() << endl;  //Classe:: assim podemos acessar um membro static
	                                                                       //mesmo sem precisar chamar de um objeto dessa classe
	return 0;
}