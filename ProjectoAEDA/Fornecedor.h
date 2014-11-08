#ifndef FORNECEDOR_H_
#define FORNECEDOR_H_

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Fornecedor
{
	string nome;
	int ID;
	int Contato;

public:
	Fornecedor(void);
	Fornecedor(string nome, int ID, int Contato);
	virtual ~Fornecedor(void);
	int getIDFornecedor();
	string getNomeFornecedor();
	int getContato();

};

#endif
