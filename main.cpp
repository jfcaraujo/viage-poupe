#include <iostream>
#include "geral.h"
#include "cartao.h"
/*#include "viagens.h"
#include "comboios.h"
#include "bilhetes.h"*/

using namespace std;

void menuSemCartao(PassageirosRegistados *r);
void RegistoCartao (PassageirosRegistados *r);

//Menu para passageiros sem cartao
void menuSemCartao(PassageirosRegistados *r){

	int menu;

	cout << "0 - Registar Cartao" << endl;
	cout << "1 - Comprar Bilhete" << endl;
	cout << "2 - Devolver Bilhete" << endl;

	cin >> menu;


	switch (menu){
	case 0:
		RegistoCartao(r);
		break;
	}
}

//Funçao registo do cartao
void RegistoCartao (PassageirosRegistados *r){

	int cartao;
			string nome;
			string profissao;
			datas datanasc;

			Cartao viagem25 ("Viagem 25",39, 0.75);
			Cartao viagem50 ("Viagem 50",69, 0.50);
			Cartao viagem100 ("Viagem 100", 149, 0.0);

			cout << endl << "Cartoes disponiveis:" << endl;
			cout << endl << "1 - Viagem 25: 25% desconto em todas as viagens por 39€/mes" << endl;
			cout << "2 - Viagem 50: 50% desconto em todas as viagens por 69€/mes" << endl;
			cout << "3 - Viagem 100: 100% desconto em todas as viagens por 149€/mes" << endl;
			cout << endl << "Escolher (1-3) o cartão desejado:";
			cin >> cartao;
			cout << endl << "Nome: ";
			cin >> nome;
			cout << endl << "Profissao: ";
			cin >> profissao;
			cout << endl << "Data de nascimento(formato DD MM AAAA): ";
			cin >> datanasc.dia;
			cin >> datanasc.mes;
			cin >> datanasc.ano;

			if (cartao == 1){
				Registo reg (&viagem25, nome, profissao, datanasc);
				r->adicionaRegisto(&reg);
			}
			else if (cartao == 2) {
					Registo reg (&viagem50, nome, profissao, datanasc);
					r->adicionaRegisto(&reg);
			}
			else {
				Registo reg (&viagem100, nome, profissao, datanasc);
				r->adicionaRegisto(&reg);

			}

			cout << endl << endl << "Cartao registado com o id: " << r->getNumRegistos() << endl;
}



int main(){

	/*Passageiros sao normais ou com cartao, passageiros normais so tem direito a descontos gerais e podem comprar
	  bilhetes sem qualquer registo*/

	/*Existem tres tipos de cartao "viagem 25/50/100" que dao 25/50/100% de desconto respectivamente*/

	int menu = 10;
	PassageirosRegistados r;





	while (menu !=5){

		cout << "0 - Passageiros sem Cartao" << endl;
		cout << "5 - Fechar aplicacao" << endl;
		cin >> menu;
		switch (menu){
		case 0:
			menuSemCartao(&r);
			break;
		}
	}

	/*Para adquirir um cartao o passageiro tem que efectuar um registo com varios dados pessoais: cartao escolhido, nome,
	  profissao, data de nascimento etc, no cartao vai ficar tambem registo as viagens efectuadas*/
	/*dataf teste;
	teste.dia = 5;
	teste.mes = 5;
	teste.ano = 5;
	Registo pessoaAleatoria(&viagem25, "nome", "trabalho", teste);*/

	/*Os comboios sao de dois tipos Alfa Pendular e Intercidades*/
	//AlfaPendular A1 (60);
	//Intercidades I1(100);

	/*E pedido para mostrar todos os comboios que existem e a sua informacao, lotaçao, etc*/
	/*Frota f1;
	f1.adicionaAlfa(&A1);
	f1.adicionaInter(&I1);*/

	/*As Viagens tem que ter um comboio associado e terao que ter um preco base,
	  calculado por distancia ou dado manualmente?*/


	/*Finalmente a bilheteira poe uma viagem disponivel a certo hora e dia, e permite passageiros com ou sem cartao
	  comprarem e devolverem bilhetes*/

	/*Um desconto geral de 70% no valor base tem que ser aplicado caso menos de 50% dos lugares estiverem vendidos
	  48 horas antes da partida*/

	/*A informaçao depois deve ter que ser guardada (e lida) num ficheiro de texto para evitar toda a informacao
	  ser perdida cada vez que se fecha o programa*/

}
