#include "Estacao.h"


Estacao::Estacao(void)
{
}

Estacao::Estacao(int ID, string cidade, vector<Bicicleta> bicicletas)
{
	this->ID = ID;
	this->cidade = cidade;
	this->bicicletas = bicicletas;

}

Estacao::~Estacao(void)
{
}


int Estacao::getIDEstacao()
{
	return ID;
}
string Estacao::getCidade()
{
	return cidade;
}

vector<Bicicleta> Estacao::getVectordasBicicletas() {
      return bicicletas;

}
