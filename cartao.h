#ifndef _CARTAO_H
#define _CARTAO_H

#include <iostream>
#include <string>
#include "viagens.h"
#include <vector>

struct dataf{
	int dia;
	int mes;
	int ano;
};

struct hora{
	int hora;
	int min;
};


class Cartao {
	int precoMensal;
	float desconto;
public:
	Cartao(int prc, int desc);
	int getPreco();
	float getDesconto();
};


class Registo{
	Cartao *c1;
	string nome;
	string profissao;
	dataf datanascimento;
	vector <Viagem *> viagens;
public:
	Registo(Cartao *c, string nome, string profissao, dataf datanasc);
	void adicionaViagem(Viagem *v1);
	void alterarCartao(Cartao *c);
	string getInformacao();
};


#endif
