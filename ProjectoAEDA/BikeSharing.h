#ifndef BIKESHARING_H_
#define BIKESHARING_H_

#include  "Fornecedor.h"
#include "Cliente.h"
#include "Estacao.h"
#include "Bicicleta.h"

using namespace std;

#pragma once
class BikeSharing
{
public:
	int last_bike; int last_costumer; //ids da ultima bicicleta e do ultimo cliente
	vector<Fornecedor> fornecedores; 
	vector<Cliente *> clientes;
	vector<Estacao> estacoes;
	vector<Bicicleta> emManutencao;

	BikeSharing(void);
	virtual ~BikeSharing(void);
	
	void lista_clientes();
	void novo_Cliente();
	void novo_Clienteaux(string nome, int opcao);

};

#endif