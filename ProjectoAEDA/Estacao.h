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
	virtual ~Estacao(void);
	int getVagas(void){return 30-bicicletas.size();}
};

#endif

