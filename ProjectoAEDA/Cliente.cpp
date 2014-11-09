#include "Cliente.h"


Cliente::Cliente(void)
{
}

Cliente::Cliente(string nome, int ID,float horasMes){
	this->nome=nome;
	this->ID=ID;
	this->horasMes=horasMes;
};

Cliente::~Cliente(void){}

void Cliente::imprime_Cliente(){cout<<endl<<ID<<" - "<<nome;}

int Cliente::getMensalidade(){ return 0; }
float Cliente::getTotalMes(){ return 0; }

void cRegistado::imprime_Cliente(){
	Cliente::imprime_Cliente();
	float hRestantes; 
	hRestantes=horasPagas-getHorasMes();
	cout<<" - "<<hRestantes<<" horas restantes este mes";
}

cRegistado::~cRegistado(void){}
cOcasional::~cOcasional(void){}

cRegistado::cRegistado(string nome, int ID, float horasMes, int mensalidade): Cliente(nome,ID,horasMes){
	if(mensalidade==1) {mensalidade=69,6; horasPagas=24;}
	else if(mensalidade==2) {mensalidade=124.8; horasPagas=48;}
	else if(mensalidade==3) {mensalidade=220.8; horasPagas=96;}
	else {mensalidade=250; horasPagas=744;} //744 é o numero de horas de um mês de 31 dias
	this->horasPagas=horasPagas;
}


cOcasional::cOcasional(string nome, int ID, float horasMes, float totalMes): Cliente(nome,ID,horasMes){this->totalMes=totalMes;}

void cOcasional::imprime_Cliente(){
	Cliente::imprime_Cliente();
	cout<<" - "<<getHorasMes()<<" horas restantes este mes";
}

int Cliente::getIDcliente()
{
	return ID;
}
string Cliente::getNomeCliente()
{
	return nome;
}
float Cliente::getHorasMes()
{
	return horasMes;
}
int cRegistado::getMensalidade()
{
	if(mensalidade==69,6) {return 1;}
		else if(mensalidade==124.8) {return 2;}
		else if(mensalidade==220.8) {return 3;}
		else {return 4;}
}

int cOcasional::getMensalidade()
{
	return 5;
}

float cRegistado::getTotalMes()
{
	return 0;
}

float cOcasional::getTotalMes()
{
	return totalMes;
}
