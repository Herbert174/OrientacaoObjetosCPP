#include "Titular.h"

Titular::Titular(Cpf cpf, std::string nome, std::string senha) : Pessoa(cpf,nome), Autenticavel(senha) {  //Chamando construtor de Pessoa e Autenticavel no construtor de Titular

}

