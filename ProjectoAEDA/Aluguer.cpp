#include "Aluguer.h"


Aluguer::Aluguer(void){}

Aluguer::~Aluguer(void){}

Aluguer::Aluguer(int ID, int idCliente, int idPosto1, int idPosto2, float horas, vector<int> bicicletas){
	this->ID=ID;
	this->idCliente=idCliente;
	this->idPosto1=idPosto1;
	this->idPosto2=idPosto2;
	this->horas=horas;
	this->bicicletas=bicicletas;
}

float Aluguer::fimAluguer(int posto, float horas){
	this->idPosto2=posto;
	this->horas=horas;
	return horas*3;
}