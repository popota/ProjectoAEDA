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
		cOcasional *novoC= new cOcasional(nome,last_costumer);
		clientes.push_back(novoC);
	}
	else{ //adicionar cliente registado
		float mensalidade;
		if(opcao==1) mensalidade=69,6;
		else if(opcao==2) mensalidade=124.8;
		else if(opcao==3) mensalidade=220.8;
		else mensalidade=250;
		last_costumer++;
		cRegistado *novoC= new cRegistado(nome,last_costumer,mensalidade);
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
	cout << "3 - Pre-pago 92h/mes"<<endl;
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


