#ifndef CLIENTE_H_
#define CLIENTE_H_


#include <string>
#include <vector>
#include <iostream>

#include "Aluguer.h"

using namespace std;
class Cliente{
	string nome;
	int ID;
	vector<Aluguer> alugueres;
	float horasMes; //valor que guarda o tempo (em horas) do uso do serviço nesse mês
public:
	Cliente(void);
	Cliente(string nome, int ID, vector<Aluguer> alugueres, float horasMes);//construtor usado ao ler ficheiros
	Cliente(string nome, int ID);
	virtual ~Cliente(void);

	virtual void imprime_Cliente();
};

class cRegistado: public Cliente{
	float mensalidade;int horasPagas;

public:
	cRegistado(string nome, int ID, vector<Aluguer> alugueres, float horasMes, float mensalidade);//construtor usado ao ler ficheiros
	cRegistado(string nome, int ID, float mensalidade, int horasPagas);
	virtual ~cRegistado(void);
	void imprime_Cliente();
};

class cOcasional: public Cliente{
	float totalMes; //total de dinheiro gasto por este utilizador 
public:
	cOcasional(string nome, int ID, vector<Aluguer> alugueres, float horasMes, float totalMes);//construtor usado ao ler ficheiros
	cOcasional(string nome, int ID);
	virtual ~cOcasional(void);
	void imprime_Cliente();
};

#endif