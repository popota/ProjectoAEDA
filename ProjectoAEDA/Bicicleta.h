#ifndef BICICLETA_H_
#define BICICLETA_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;


class Bicicleta
{
	int ID;
	bool electrica, cesto, origem; //bool origem - Se esta bicicleta já tiver sido reparada origem=FALSE
	string cor;
	int velocidade, idEmpresa;
	string idPos;
public:
	Bicicleta(void);
	Bicicleta(int ID, bool electrica, bool cesto, bool origem, string cor, int velocidade, int idEmpresa, string idPos);
	virtual ~Bicicleta(void);
	int getBicicletaID();
	bool getBicicletaElectrica();
	bool getBicicletaCesto();
	bool getBicicletaOrigem();
	string getBicicletaCor();
	int getBicicletaVelocidade();
	int getBicicletaIdEmpresa();
	string getBicicletaIdPos();
};

#endif
