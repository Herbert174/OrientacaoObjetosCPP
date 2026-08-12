#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.h"
#include "Cpf.h"

using namespace std;

void ExibeSaldo(Conta& conta) {
	//Conta contadesnecessario("123", titular);
	cout << "O saldo da conta e : " << conta.recuperaSaldo() << endl;
}

int main() {
	Cpf cpf("12345678910");

	//Titular* titular = new Titular(cpf, "Herbert"); //Forma de alocar a variavel na heap, invés da stack, menos 
	                                                  //otimizado mas necessário quando trabalhamos com objetos maiores
	Titular titular(cpf, "Herbert");
	Conta umaConta("123", titular);   //Instanciando uma struct
	Conta umaOutraConta("321", Titular(Cpf("98765432110"), "Santos"));  //Dessa forma criamos um objeto temporario sem nome, e não conseguimos acessar esse objeto fora do objeto Conta

	Conta terceiraConta("456", Titular(string("43555467676"), "Michael"));   //Conversão implicita, quando invés de passar a classe utilizada você já manda direto 
	                                                                         //o tipo de variavel necessário para inicializar aquela classe
	//umaOutraConta.titular.recuperaNomeTitular();                           //Se o construtor tiver a propriedade explicit, conversões implicitas serão negadas
	                                                                         //Conversões implicitas podem evitar a necessidade de copias pela classe
	/*umaConta.defineNumeroConta("123");                                     //Recomendado sua utilização quando se busca performance
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