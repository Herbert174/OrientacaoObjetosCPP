#pragma once
#include "Conta.hpp"

class ContaPoupanca final : public Conta   //O atributo final garante que nenhuma classe possa herdar dela
{
public: 
	ContaPoupanca(std::string numero, Titular titular);
	void sacar(float valorASacar)override;  //Verifica se a função em questão não está presente em uma
                                            //das classes em que esta classe herda, e se a mesma não é
                                            //virtual, se não for apresenta erro impedindo assim que
                                            //falhas de escrita interfiram na sobrescrita de um método,
                                            //já que se o mesmo não tiver o mesmo
                                            //nome será considerado como uma nova função
    ~ContaPoupanca();
};
