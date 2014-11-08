#include "Cliente.h"


Cliente::Cliente(void)
{
}

Cliente::Cliente(string nome, int ID){
	this->nome=nome;
	this->ID=ID;
	this->horasMes=0;
};

Cliente::~Cliente(void){}

void Cliente::imprime_Cliente(){cout<<endl<<ID<<" - "<<nome;}

void cRegistado::imprime_Cliente(){
	Cliente::imprime_Cliente();
	float hRestantes; //inacabado
}

cRegistado::~cRegistado(void){}
cOcasional::~cOcasional(void){}

cRegistado::cRegistado(string nome, int ID, float mensalidade, int horasPagas): Cliente(nome,ID){this->mensalidade=mensalidade;this->horasPagas=horasPagas;}


cOcasional::cOcasional(string nome, int ID): Cliente(nome,ID){}

