#ifndef BIKESHARING_H_
#define BIKESHARING_H_

#include  "Fornecedor.h"
#include "Cliente.h"
#include "Estacao.h"


#include "Bicicleta.h"

using namespace std;

class BikeSharing
{
	
public:
	
	vector<Fornecedor> fornecedores; 
	vector<Cliente *> clientes;
	vector<Estacao> estacoes;
	vector<Bicicleta> emManutencao;
	int last_bike; int last_costumer; int last_fornecedor; //ids da ultima bicicleta e do ultimo cliente
	BikeSharing(void);
	virtual ~BikeSharing(void);
	
	void lista_clientes();
	void novo_Cliente();
	void novo_Clienteaux(string nome, int opcao);
	int getLastBike();
	int getLastCostumer();
	int getLastFornecedor();
	void guardaClientesFicheiro(string ficheiro);
	void guardaEstacaoFicheiro(string ficheiro);
	void guardaFornecedoresFicheiro(string ficheiro);
	vector<Cliente *> leClientesFicheiro(string ficheiro);
};

#endif
