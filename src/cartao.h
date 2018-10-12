#ifndef _CARTAO_H
#define _CARTAO_H

#include <iostream>
#include <string>
//#include "viagens.h"
#include <vector>
#include "geral.h"


class Cartao {
	float precoMensal;
	float desconto;
	std::string nome;
public:
	/**
	 * Construtor: \n
	 * nome -> Nome do cartao \n
	 * prc  -> Preco mensal da subscricao do cartao \n
	 * desc -> Desconto dado pelo cartao em todas as viagens \n
	 */
	Cartao(std::string nome, float prc, float desc);
	/**
	 * Devolve o preco mensal do cartao
	 */
	float getPreco() const;
	/**
	 * Devolve o desconto em todas as viagens dado pelo cartao
	 */
	float getDesconto() const;
	/**
	 * Devolve toda a informacao relacionada com o cartao
	 */
	std::string getInformacao() const;
};


class Registo{
	Cartao *c1;
	std::string nome;
	std::string profissao;
	datas datanascimento;
	//std::vector <Viagem *> viagens;
public:
	Registo(Cartao *c, std::string nome, std::string profissao, datas datanasc);
	//void adicionaViagem(Viagem *v1);
	void alterarCartao(Cartao *c);
	std::string getInformacao();
};


class PassageirosRegistados {
	std::vector<Registo *> regs;
public:
	void adicionaRegisto(Registo *r1);
	int getNumRegistos();

};


#endif
