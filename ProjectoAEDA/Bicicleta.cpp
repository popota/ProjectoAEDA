#include "Bicicleta.h"


Bicicleta::Bicicleta(void){}

Bicicleta::Bicicleta(int ID, bool electrica, bool cesto, bool origem, string cor, int velocidade, int idEmpresa, string idPos)
{
	this-> ID= ID;
	this-> electrica = electrica;
	this-> cesto = cesto;
	this-> origem = origem;
	this-> cor = cor;
	this-> velocidade = velocidade;
	this-> idEmpresa = idEmpresa;
	this-> idPos = idPos;
}

int Bicicleta::getBicicletaID()
{
	return ID;
}

bool Bicicleta::getBicicletaElectrica()
{
	return electrica;
}

bool Bicicleta::getBicicletaCesto()
{
	return cesto;
}

bool Bicicleta::getBicicletaOrigem()
{
	return origem;
}

string Bicicleta::getBicicletaCor()
{
	return cor;
}

int Bicicleta::getBicicletaVelocidade()
{
	return velocidade;
}

int Bicicleta::getBicicletaIdEmpresa()
{
	return idEmpresa;
}

string Bicicleta::getBicicletaIdPos()
{
	return idPos;
}

Bicicleta::~Bicicleta(void){}

