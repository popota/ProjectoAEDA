#include <iostream>
#include <fstream>

#include "BikeSharing.h"
#include "Estacao.h"
#include "Aluguer.h"
#include "Bicicleta.h"
#include "Cliente.h"
#include "Fornecedor.h"


using namespace std;

void BikeSharing::guardaClientesFicheiro(string ficheiro)
{
	ofstream file;

	file.open(ficheiro.c_str(), ofstream::out);

	if (file.is_open())
	{
		
		file << static_cast<int>(clientes.size()) << endl;
		file << endl << getLastBike() << endl;
		file << getLastCostumer() << endl;
		file << getLastFornecedor() << endl << endl;
		vector<Cliente *>::iterator it;
		for(it = clientes.begin(); it!= clientes.end(); it++)
		{
			file << (*it) ->getIDcliente() << endl;
			file << (*it) ->getNomeCliente() << endl;
			file << (*it) ->getHorasMes() << endl;
			file << (*it)->getMensalidade() << endl << endl;

		}

	}
	file.close();
}

void  BikeSharing::guardaFornecedoresFicheiro(string ficheiro)
{
	ofstream file;

		file.open(ficheiro.c_str(), ofstream::out);

		if (file.is_open())
		{
			vector<Fornecedor>::iterator it;
			file << static_cast<int>(fornecedores.size()) << endl << endl;
			for(it = fornecedores.begin(); it!= fornecedores.end(); it++)
			{
				file << (*it).getIDFornecedor() << endl;
				file << (*it).getNomeFornecedor() << endl;
				file << (*it).getContato() << endl << endl;
			}
		}
		file.close();
}


void  BikeSharing::guardaEstacaoFicheiro(string ficheiro)
{
	ofstream file;
	file.open(ficheiro.c_str(), ofstream::out);

	if(file.is_open())
	{
		vector<Estacao>::iterator it;
		file << static_cast<int>(estacoes.size()) << endl << endl;
		for(it = estacoes.begin(); it!= estacoes.end(); it++)
		{
			file << (*it).getIDEstacao() << endl;
			file << (*it).getCidade() << endl;
			vector<Bicicleta> bicicletas = (*it).getVectordasBicicletas();
			vector<Bicicleta>::iterator itb;
			file << static_cast<int>(bicicletas.size()) << endl << endl;
			for(itb = bicicletas.begin();itb != bicicletas.end(); itb++)
			{
				file << (*itb).getBicicletaID() << endl;
				file << (*itb).getBicicletaElectrica() << endl;
				file << (*itb).getBicicletaCesto() << endl;
				file << (*itb).getBicicletaOrigem() << endl;
				file << (*itb).getBicicletaCor() << endl;
				file << (*itb).getBicicletaVelocidade() << endl;
				file << (*itb).getBicicletaIdEmpresa() << endl;
				file << (*itb).getBicicletaIdPos() << endl << endl;
			}
		}
	}
	file.close();
}

