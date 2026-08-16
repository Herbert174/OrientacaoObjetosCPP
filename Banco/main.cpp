#include <iostream>
#include <string>
#include "Conta.hpp"
#include "ContaCorrente.h"
#include "ContaPoupanca.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"
#include "Gerente.h"

using namespace std;

void ExibeSaldo(Conta& conta) {   //Por esperar um tipo Conta, o ContaPoupança tambem pode ser passado por 
	                              //parametro porém desta forma como está escrito as funções chamadas
								  //seguirão as regras de Conta e não ContaPoupança
	//Conta contadesnecessario("123", titular);
	cout << "O saldo da conta e : " << conta.recuperaSaldo() << endl;
}

void FazLogin(const Autenticavel& alguem, string senha){
	if (alguem.autentica(senha)) {
		cout << "Login realizado com sucesso" << endl;
	}
	else {
		cout << "Senha invalida" << endl;
	}
}

int main() {
	Cpf cpf("12345678910");
	Titular titular(cpf, "Herbert", "Aquela senha");
	/*Conta* contaNaHeap = new ContaPoupanca("123", titular);
	delete contaNaHeap;
	return 0;*/
	//Titular* titular = new Titular(cpf, "Herbert"); //Forma de alocar a variavel na heap, invés da stack, menos 
	                                                  //otimizado mas necessário quando trabalhamos com objetos maiores
	//Titular titular(cpf, "Herbert");
	ContaCorrente umaConta("123", titular);   //Instanciando uma struct
	ContaPoupanca umaContaP("123", titular);
	ContaCorrente umaOutraConta("321", Titular(Cpf("98765432110"), "Santos", "Aquela senha"));  //Dessa forma criamos um objeto temporario sem nome, e não conseguimos acessar esse objeto fora do objeto Conta
	ContaPoupanca umaOutraContaP("321", Titular(Cpf("98765432110"), "Santos", "Aquela senha"));

	ContaCorrente terceiraConta("456", Titular(string("43555467676"), "Michael", "Aquela senha"));   //Conversão implicita, quando invés de passar a classe utilizada você já manda direto 
	                                                                         //o tipo de variavel necessário para inicializar aquela classe
	//umaOutraConta.titular.recuperaNomeTitular();                           //Se o construtor tiver a propriedade explicit, conversões implicitas serão negadas
	                                                                         //Conversões implicitas podem evitar a necessidade de copias pela classe
	/*umaConta.defineNumeroConta("123");                                     //Recomendado sua utilização quando se busca performance
	umaConta.defineCpfTitular("12345678910");
	umaConta.defineNomeTitular("Geraldo");*/
	
	umaConta.depositar(250);
	umaConta.sacar(50);
	umaContaP.depositar(250);
	umaContaP.sacar(50);

	/*umaOutraConta.defineNumeroConta("321");
	umaOutraConta.defineCpfTitular("01987654321");
	umaOutraConta.defineNomeTitular("Robson");*/
	umaOutraConta.depositar(500);
	umaOutraConta.sacar(75);
	umaOutraContaP.depositar(500);
	umaOutraContaP.sacar(75);

	umaOutraConta.transferePara(umaConta, 120);
	
	cout << "uma Conta: numero da conta: " << umaConta.recuperaNumeroConta() << " CPF do titular: " << umaConta.recuperaCpfTitular();
	cout << " Nome do titular: " << umaConta.recuperaNomeTitular() << endl;
	cout << "uma outra Conta: numero da conta: " << umaOutraConta.recuperaNumeroConta() << " CPF do titular: " << umaOutraConta.recuperaCpfTitular();
	cout << " Nome do titular: " << umaOutraConta.recuperaNomeTitular() << endl;

	//cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra conta: " << umaOutraConta.recuperaSaldo() << endl;
	ExibeSaldo(umaConta);
	ExibeSaldo(umaContaP);
	ExibeSaldo(umaOutraConta);
	ExibeSaldo(umaOutraContaP);

	cout << "Numero de contas " << Conta::recuperanumeroContas() << endl;  //Classe:: assim podemos acessar um membro static
	                                                                       //mesmo sem precisar chamar de um objeto dessa classe
	
	Gerente funcionario(Cpf("12345678910"), "Herbert", 5000, "Aquela senha");

	cout << "Nome do funcionario: " << funcionario.recuperaNome() << endl;
	cout << "CPF do funcionario: " << funcionario.recuperaCpf() << endl;

	return 0;
}

//Forma de resolver o problema diamante, que acontece quando utilizamos heranças multiplas que acabam herdando alguma classe mais de uma vez
//Utilize a herança virtual, dessa forma a tempo de execução o compilador irá verificar se a classe já foi instanciada, se caso já foi não a 
//chama novamente, evitando assim que o construtor da mesma seja chamada novamente e evitando erro de metodos ambiguos (definidos em mais de um lugar)

/*
struct A {
	A() { cout << "Construtor de A\n"; }
	void metodo() { cout << "Metodo de A\n"; }
};

struct B : virtual A {
	B() { cout << "Construtor de B\n"; }
	void algumMetodo() { cout << "Metodo de B\n"; }
};

struct C : virtual A {
	C() { cout << "Construtor de C\n"; }
	void outroMetodo() { cout << "Metodo de C\n"; }
};

struct D : B, C {
	D() { cout << "Construtor de D\n"; }
};

int main() {
	D variavel;
	variavel.metodo();
	variavel.B::metodo(); //Forma alternativa de evitar metodo ambiguo, explicitando de onde utilizar o metodo para não ter ambiguidade 
}*/