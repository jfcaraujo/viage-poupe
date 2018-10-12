#include "cartao.h"


using namespace std;

Cartao::Cartao(string nome, float prc, float desc){
	this->precoMensal = prc;
	this->desconto = desc;
	this->nome = nome;
}

float Cartao::getPreco() const{
	return precoMensal;
}

float Cartao::getDesconto() const {
	return desconto;
}


string Cartao::getInformacao() const{
	return this->nome + " Preço: " + to_string(this->precoMensal) + "€/mês  Desconto: " + to_string(this->desconto) + "€/mês";
}

Registo::Registo(Cartao *c, std::string nome, std::string profissao, datas datanasc){
	this->c1 = c;
	this->nome = nome;
	this->profissao = profissao;
	this->datanascimento = datanasc;
}

void PassageirosRegistados::adicionaRegisto(Registo *r1){
	this->regs.push_back(r1);
}

int PassageirosRegistados::getNumRegistos(){
	return this->regs.size();

}
