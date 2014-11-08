#ifndef CLIENTE_H_
#define CLIENTE_H_


#include <string>
#include <vector>
#include <iostream>

#include "Aluguer.h"
#include "Bicicleta.h"

using namespace std;
class Cliente{
	string nome;
	int ID;
	vector<Aluguer> alugueres;
	vector<Bicicleta> emUso;
	float horasMes; //valor que guarda o tempo (em horas) do uso do serviço nesse mês
public:
	Cliente(void);
	Cliente(string nome, int ID, float horasMes);//construtor usado ao ler ficheiros
	virtual ~Cliente(void);

	virtual void imprime_Cliente();
};

class cRegistado: public Cliente{
	float mensalidade;int horasPagas;
public:
	cRegistado(string nome, int ID, float horasMes, int mensalidade);//construtor usado ao ler ficheiros
	virtual ~cRegistado(void);
	void imprime_Cliente();
};

class cOcasional: public Cliente{
	float totalMes; //total de dinheiro gasto por este utilizador 
public:
	cOcasional(string nome, int ID, float horasMes, float totalMes);//construtor usado ao ler ficheiros
	virtual ~cOcasional(void);
	void imprime_Cliente();
};

#endif