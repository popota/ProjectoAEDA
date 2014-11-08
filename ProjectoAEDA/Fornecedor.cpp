#include "Fornecedor.h"


Fornecedor::Fornecedor(void)
{
}

Fornecedor::Fornecedor(string Nome, int ID, int Contato)
{
this -> nome =Nome;
this -> ID = ID;
this -> Contato = Contato;
}
Fornecedor::~Fornecedor(void)
{
}

string Fornecedor::getNomeFornecedor()
{
	return nome;
}

int Fornecedor::getIDFornecedor()
{
	return ID;
}

int Fornecedor::getContato()
{
	return Contato;
}
