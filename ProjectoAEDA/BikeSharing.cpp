#include "BikeSharing.h"


BikeSharing::BikeSharing(void)
{
}


BikeSharing::~BikeSharing(void)
{
}

void BikeSharing::novo_Clienteaux(string nome, int opcao){
	if(opcao==5){ //adicionar cliente ocasional
		last_costumer++;
		cOcasional *novoC= new cOcasional(nome,last_costumer,0,0);
		clientes.push_back(novoC);
	}
	else{ //adicionar cliente registado
		last_costumer++;
		cRegistado *novoC= new cRegistado(nome,last_costumer,0,opcao);
		clientes.push_back(novoC);
	}
}

void BikeSharing::novo_Cliente(){
	string nome, input;
	int opcao;

	cout << endl << endl << "*** NOVO CLIENTE ***" << endl;
	cout << "Nome: ";
	cin.clear();
	getline(cin, nome);
	
	while(true){
	cout <<endl<< "Escolha opcao de conta:"<<endl;
	cout << "1 - Pre-pago 24h/mes"<<endl;
	cout << "2 - Pre-pago 48h/mes"<<endl;
	cout << "3 - Pre-pago 96h/mes"<<endl;
	cout << "4 - Pre-pago ilimitado"<<endl;
	cout << "5 - Servico ocasional"<<endl;
	cout << "6 - cancelar operacao"<<endl;

	cin.clear();
	getline(cin, input);
	opcao = atoi(input.c_str());
	 
	    switch (opcao) {
	    case 1:
			novo_Clienteaux(nome,opcao);
			return;
		case 2:
			novo_Clienteaux(nome,opcao);
			return;
		case 3:
			novo_Clienteaux(nome,opcao);
			return;
		case 4:
			novo_Clienteaux(nome,opcao);
			return;
		case 5:
			novo_Clienteaux(nome,opcao);
			return;
		case 6:
			return;
		default:
			cout << "Erro! Entrada de dados invalida.\n" << endl;
			break;
		}
	}
}

int BikeSharing::getLastBike()
{
	return last_bike;
}

int BikeSharing::getLastCostumer()
{
	return last_costumer;
}

int BikeSharing::getLastFornecedor()
{
	return last_fornecedor;
}

void BikeSharing::lista_clientes(){
	cout<<endl<<"*** LISTA CLIENTES ***"<<endl;
	vector<Cliente *>::iterator it;
		for(it = clientes.begin(); it!= clientes.end(); it++)
		{
			(*it) ->imprime_Cliente();
		}
}

void BikeSharing::edita_cliente(){
	int opcao, fid; 
	string input;
	cout<<endl<<"*** EDITA CLIENTE ***"<<endl;
	while(true){
	cout<<"Cliente ID ou 0 to exit:";
	cin.clear();
	getline(cin, input);
	opcao = atoi(input.c_str());

	if(opcao==0)return;
	else if(opcao<0 || opcao>last_costumer) cout<<endl<<"No valid ID, please enter valid ID";
	else{
		vector<Cliente *>::iterator it;
			for(it = clientes.begin(); it!= clientes.end(); it++)
			{
				fid=(*it)->getID();
				if(fid==opcao) {(*it)->editaCliente(); return;}
			}
			cout<<endl<<"No valid ID, please enter valid ID";
		}
	}
}