#ifndef BICICLETA_H_
#define BICICLETA_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;


class Bicicleta
{
	int ID;
	bool electrica, cesto, origem; //bool origem - Se esta bicicleta j� tiver sido reparada origem=FALSE
	string cor;
	int velocidade, idEmpresa;
	string idPos;
public:
	Bicicleta(void);
	Bicicleta(int ID, bool electrica, bool cesto, bool origem, string cor, int velocidade, int idEmpresa, string idPos);
	virtual ~Bicicleta(void);
};

#endif