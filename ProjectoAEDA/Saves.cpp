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
			file << (*it)->getMensalidade() << endl;
			file << (*it)->getTotalMes() << endl << endl;

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

vector<Cliente *> BikeSharing::leClientesFicheiro(string ficheiro)
{
	vector<Cliente*> clientestemp;
	ifstream doc;

	int IDInt = 0;
	float horasMesInt = 0;
	int mensalidadeInt = 0;
	int lastBikeInt = 0;
	int lastCostumerInt = 0;
	int lastFornecedorInt = 0;
	int clientessizeint = 0;
	float TotalMesInt = 0;

	string ID;
	string nome;
	string horasMes;
	string Mensalidade;
	string LastBike;
	string LastCostumer;
	string LastFornecedor;
	string ClientesSize;
	string emBranco;
	string TotalMes;

	doc.open(ficheiro.c_str(), ifstream::in);

	if (doc.is_open())
	{
		getline(doc, ClientesSize);
		clientessizeint = atoi(ID.c_str());
		getline(doc, emBranco);
		getline(doc, LastBike);
		lastBikeInt = atoi(LastBike.c_str());
		getline(doc, LastCostumer);
		lastCostumerInt = atoi(LastCostumer.c_str());
		getline(doc, LastFornecedor);
		lastFornecedorInt = atoi(LastFornecedor.c_str());
		getline(doc, emBranco);
		for (unsigned int i = 0; i < clientessizeint; i++)
		{
			getline(doc, ID);
			IDInt = atoi(ID.c_str());
			getline(doc, nome);
			getline(doc, horasMes);
			horasMesInt = atoi(horasMes.c_str());
			getline(doc, Mensalidade);
			mensalidadeInt = atoi(Mensalidade.c_str());
			getline(doc, TotalMes);
			TotalMesInt = atoi(TotalMes.c_str());
			getline(doc, emBranco);
			Cliente *a1 = new Cliente(nome, IDInt, horasMesInt);
			if (mensalidadeInt == 5)
			{
				cOcasional a2(nome, IDInt, horasMesInt, TotalMesInt);
			}
			else 
			{
				cRegistado a2(nome, IDInt, horasMesInt, mensalidadeInt);
			}
			clientestemp.push_back(a1);
		}
	}
	return clientestemp;
}