#ifndef ESTACAO_H_
#define ESTACAO_H_

#include <string>
#include <vector>
#include <iostream>
#include "Bicicleta.h"
using namespace std;

class Estacao
{
	int ID;
	string cidade;
	vector<Bicicleta> bicicletas;
public:
	Estacao(void);
	Estacao(int ID, string cidade,vector<Bicicleta> bicicletas);
	virtual ~Estacao(void);
	int getVagas(void){return 30-bicicletas.size();}
	int getIDEstacao();
	string getCidade();
	vector<Bicicleta> Estacao::getVectordasBicicletas();
};

#endif

