#include <iostream>
#include <fstream>

#include "BikeSharing.h"
#include "Estacao.h"
#include "Aluguer.h"
#include "Bicicleta.h"
#include "Cliente.h"
#include "Fornecedor.h"


using namespace std;

void guardaClientesFicheiro(vector<Cliente *> clientes, string ficheiro)
{
	ofstream file;

	file.open(ficheiro.c_str(), ofstream::out);

	if (file.is_open())
	{
		vector<Cliente *>::iterator it;
		file << static_cast<int>(clientes.size()) << endl;
		file << endl << BikeSharing::last_bike << endl;
		file << BikeSharing::last_costumer << endl;
		file << BikeSharing::last_fornecedor << endl << endl;

		for(it = clientes.begin(); it!= clientes.end(); it++)
		{
			file << (*it) ->getIDcliente() << endl;
			file << (*it) ->getNomeCliente() << endl;
			file << (*it) ->getHorasMes() << endl;
			file << (*it) ->getMensalidade() << endl;

		}

	}
	file.close();
}

void guardaFornecedoresFicheiro(vector<Fornecedor> fornecedores, string ficheiro)
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
				file << (*it).getContato() << endl;
			}
		}
		file.close();
}


void guardaEstacaoFicheiro(vector<Estacao> estacoes, string ficheiro)
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
			file << (*it).getCidade()<< endl << endl;
			vector<Bicicleta> bicicletas = (*it).getVectordasBicicletas();
			vector<Bicicleta>::iterator itb;
			file << static_cast<int>(bicicletas.size()) << endl;
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

