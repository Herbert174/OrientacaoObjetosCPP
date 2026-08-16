#include "Autenticavel.h"

Autenticavel::Autenticavel(std::string senha) : senha(senha) {

}

bool Autenticavel::autentica(std::string senha) const {
	return senha == this->senha;
	//senha == this->senha ? true : false; if ternario
}