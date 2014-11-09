#include <string>
#include <vector>
#include <iostream>

#include "BikeSharing.h"
#include "Estacao.h"

using namespace std;

BikeSharing company;
#define clientest "clientes.txt"
#define fornecedorest "fornecedores.txt"  
#define estacoes "estacoes.txt"
#define bicicletas "bicicletas.txt"   

//----------------------------------------------------------------------------------------------------
//----------------------------------- CLIENTES --------------------------------------------------------
//----------------------------------------------------------------------------------------------------

//menu_clientes()
void menu_clientes(){
	string input;
    int opcao;
 
    while (true) {

		cout << endl << endl << "*** CLIENTES ***" << endl;
		cout << "Escolha uma opcao:" << endl;
		cout << "1 - Lista de clientes" << endl;
		cout << "2 - Novo cliente" << endl;
		cout << "3 - Editar dados cliente" << endl;
		cout << "4 - Apagar cliente" << endl;
		cout << "0 - Sair" << endl;
		cout << "opcao:";
	 
	    cin.clear();
	    getline(cin, input);
	    opcao = atoi(input.c_str());

	    switch (opcao) {
	    case 1:
			company.lista_clientes();
			break;
		case 2:
			company.novo_Cliente();
			break;
		case 3:
			company.edita_cliente();
			break;
		case 4:
			//lista_bicicletas();
			break;
		case 5:
			//gere_bicicletas();
			break;
		case 0:
			return;
		default:
			cout << "Erro! Entrada de dados invalida.\n" << endl;
			break;
		}
	}
}
//----------------------------------------------------------------------------------------------------
//----------------------------------- CLIENTES --------------------------------------------------------
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
//---------------------------- FORNECEDORES E BICICLETAS -----------------------------------------------
//----------------------------------------------------------------------------------------------------

//gere_bicicletas()
void gere_bicicletas(){
	int opcao;
	string input;

	cout << endl << endl;
    cout << "Introduza ID do Fornecedor:" ;

	cin.clear();
    getline(cin, input);
    opcao = atoi(input.c_str());

	//procuraFornecedorID(opcao);
	//imprimeBicicletas(*Fornecedor ou posicao no vector fornecedores, true); NOTA: True porque chama funcao editaBicicleta()

	cout << endl << "Not implemented yet"<<endl;
    return; //checkar se melhor return ou break
}

//lista_bicicletas()
void lista_bicicletas(){
	int opcao;
	string input;

	cout << endl << endl;
    cout << "Introduza ID do Fornecedor:" ;

	cin.clear();
    getline(cin, input);
    opcao = atoi(input.c_str());

	//procuraFornecedorID(opcao);
	//imprimeBicicletas(*Fornecedor ou posicao no vector fornecedores , false); NOTA: False porque não chama funcao editaBicicleta()

	cout << endl << "Not implemented yet"<<endl;
    return; //checkar se melhor return ou break
}

//edita_fornecedor()
void edita_fornecedor(){
	int opcao;
	string input;

	cout << endl << endl;
    cout << "Introduza ID do Fornecedor:" ;

	cin.clear();
    getline(cin, input);
    opcao = atoi(input.c_str());

	//procuraFornecedorID(opcao);

	cout << endl << "Not implemented yet"<<endl;
    return; //checkar se melhor return ou break
}

//novo_fornecedor()
void novo_fornecedor(){
	cout << endl << endl;
    cout << "NOVO FORNECEDOR:" << endl;
	cout << "Not implemented yet"<<endl;
    return; //checkar se melhor return ou break
}

//lista_fornecedores()
void lista_fornecedores(){
	cout << endl << endl;
    cout << "LISTA DE FORNECEDORES:" << endl;
	cout << endl << "Not implemented yet"<<endl; /*remover quando acabado*/
	int aux = 0;
	while(aux /*<num_fornecedores*/ ){ //declarar num_fornecedores na classe BikeShare
		//cout << fornecedores[aux].getID() << " - " << fornecedores[aux].getNome() << endl; //declarar getID() e getNome() classe fornecedor e
		aux++;
	}
    return; //checkar se melhor return ou break
}

//menu menu_fornecedores
void menu_fornecedores (){
	int opcao;
	string input;
 
    while (true) {

		cout << endl << endl << "*** FORNECEDORES ***" << endl;
		cout << "Escolha uma opcao:" << endl;
		cout << "1 - Lista de fornecedores" << endl;
		cout << "2 - Novo fornecedor" << endl;
		cout << "3 - Editar dados fornecedor" << endl;
		cout << "4 - Bicicletas por fornecedor" << endl;
		cout << "5 - Gerir bicicletas"<< endl;
		cout << "0 - Sair" << endl;
		cout << "opcao:";
	 
	    cin.clear();
	    getline(cin, input);
		opcao = atoi(input.c_str());
	
		switch (opcao) {
		case 1:
			lista_fornecedores();
			break;
		case 2:
			novo_fornecedor();
			break;
		case 3:
			edita_fornecedor();
			break;
		case 4:
			lista_bicicletas();
			break;
		case 5:
			gere_bicicletas();
			break;
		case 0:
			return;
		default:
			cout << "Erro! Entrada de dados invalida.\n" << endl;
			break;
		}
	}
}
//----------------------------------------------------------------------------------------------------
//---------------------------- FORNECEDORES E BICICLETAS -----------------------------------------------
//----------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------
//-------------------------------- ECRAS PRINCIPAIS --------------------------------------------------
//----------------------------------------------------------------------------------------------------
//menu inicial
void menu_inicial (){
	string input;
    int opcao;
 
    while (true) {
		cout << endl << endl << "*** BIKE SHARING ***" << endl;
		cout << "Escolha uma opcao:" << endl;
		cout << "1 - Fornecedores e Bicicletas" << endl;
		cout << "2 - Clientes" << endl;
		cout << "3 - Estacoes" << endl;
		cout << "4 - Alugueres" << endl;
		cout << "5 - Manutencao"<< endl;
		cout << "6 - Sair" << endl;
		cout << "opcao:";
 
	    cin.clear();
	    getline(cin, input);
	    opcao = atoi(input.c_str());
 
		switch (opcao) {
		case 1:
			menu_fornecedores();
			break;
		case 2:
			menu_clientes();
			break;
		case 3:
			//menu_estacoes();
			break;
		case 4:
			//menu_alugueres();
			break;
		case 5:
			//menu_manutencao();
				break;
		case 6:
			return;
		default:
			cout << "Erro! Entrada de dados invalida.\n" << endl;
		}
	}
}

void loadingAPP(void){
	cout<<endl<<"*** LOADING DATA ***"<<endl;
	cout<<"  * CLIENTES"<<endl;
	company.leClientesFicheiro(clientest);
	vector<Cliente *> clientes = company.leClientesFicheiro(clientest);
	cout<<"  * ESTACOES"<<endl;
	//company.guardaEstacaoFicheiro(estacoes);
	cout<<"  * FORNECEDORES"<<endl;
	company.leFornecedoresFicheiro(fornecedorest);
	vector<Fornecedor> fornecedores = company.leFornecedoresFicheiro(fornecedorest);
	cout<< endl<< endl<< "*** BEM - VINDO ***"<< endl<< endl;
}

void savingAPP(void){
	cout<<endl<<"*** SAVING DATA ***"<<endl;
	cout<<"  * CLIENTES"<<endl;
	company.guardaClientesFicheiro(clientest);
	cout<<"  * ESTACOES"<<endl;
	company.guardaEstacaoFicheiro(estacoes);
	cout<<"  * FORNECEDORES"<<endl;
	company.guardaFornecedoresFicheiro(fornecedorest);
	cout<< endl<< endl<< "*** ADEUS ***";
}

//----------------------------------------------------------------------------------------------------
//-------------------------------- ECRAS PRINCIPAIS --------------------------------------------------
//----------------------------------------------------------------------------------------------------

//main
int main() {
	string pause;
	loadingAPP();
	menu_inicial();
	savingAPP();
	cin.clear();
    getline(cin, pause);
    return 0;
}