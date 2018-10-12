#include <iostream>
#include "cartao.h"
#include "viagens.h"
#include "comboios.h"
#include "bilhetes.h"

using namespace std;


int main(){

	/*Passageiros sao normais ou com cartao, passageiros normais so tem direito a descontos gerais e podem comprar
	  bilhetes sem qualquer registo*/

	/*Existem tres tipos de cartao "viagem 25/50/100" que dao 25/50/100% de desconto respectivamente*/
	Cartao viagem25 (39, 0.75);
	Cartao viagem50 (69, 0.50);
	Cartao viagem100 (149, 0.0);

	/*Para adquirir um cartao o passageiro tem que efectuar um registo com varios dados pessoais: cartao escolhido, nome,
	  profissao, data de nascimento etc, no cartao vai ficar tambem registo as viagens efectuadas*/
	dataf teste;
	teste.dia = 5;
	teste.mes = 5;
	teste.ano = 5;
	Registo pessoaAleatoria(&viagem25, "nome", "trabalho", teste);

	/*Os comboios sao de dois tipos Alfa Pendular e Intercidades*/
	AlfaPendular A1 (60);
	Intercidades I1(100);

	/*E pedido para mostrar todos os comboios que existem e a sua informacao, lotaçao, etc*/
	Frota f1;
	f1.adicionaAlfa(&A1);
	f1.adicionaInter(&I1);

	/*As Viagens tem que ter um comboio associado e terao que ter um preco base,
	  calculado por distancia ou dado manualmente?*/


	/*Finalmente a bilheteira poe uma viagem disponivel a certo hora e dia, e permite passageiros com ou sem cartao
	  comprarem e devolverem bilhetes*/

	/*Um desconto geral de 70% no valor base tem que ser aplicado caso menos de 50% dos lugares estiverem vendidos
	  48 horas antes da partida*/

	/*A informaçao depois deve ter que ser guardada (e lida) num ficheiro de texto para evitar toda a informacao
	  ser perdida cada vez que se fecha o programa*/
}
