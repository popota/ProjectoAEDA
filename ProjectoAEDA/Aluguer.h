#ifndef ALUGUER_H_
#define ALUGUER_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Aluguer
{
	int ID;
	int idCliente, idPosto1, idPosto2;
	float horas;
	vector<int> bicicletas;
public:
	Aluguer(void);
	Aluguer(int ID, int idCliente, int idPosto1, int idPosto2, float horas, vector<int> bicicletas);
	virtual ~Aluguer(void);
	float fimAluguer(int posto, float horas);//recebe o valor do posto de entrega, o numero de horas e devolve o custo do aluguer
	float getCusto(void){return horas*3;}
};

#endif
