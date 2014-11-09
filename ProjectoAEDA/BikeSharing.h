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
	
	int getLastBike(void);
	int getLastCostumer(void);
	int getLastFornecedor(void);

	//menu clientes
	void lista_clientes(void);
	void novo_Cliente(void);
	void novo_Clienteaux(string nome, int opcao);
	void edita_cliente(void);

	//save and load
	void guardaClientesFicheiro(string ficheiro);
	void guardaEstacaoFicheiro(string ficheiro);
	void guardaFornecedoresFicheiro(string ficheiro);
	vector<Cliente *> leClientesFicheiro(string ficheiro);
	vector<Fornecedor> leFornecedoresFicheiro(string ficheiro);
};

#endif
