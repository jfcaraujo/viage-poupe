/*#ifndef _COMBOIOS_H
#define _COMBOIOS_H

#include <string>
#include <vector>


class Comboio {//outras caracteristicas?
protected:
	int lotacao;
	bool ocupado;//se ja tem uma viagem atribuida
public:
	int getlotacao();
	virtual string getInformacao();
	bool getOcupado();
	virtual ~Comboio(){};

};

class AlfaPendular: public Comboio {
public:
	AlfaPendular(int lotacao);
	string getInformacao();
};

class Intercidades: public Comboio {
public:
	Intercidade(int lotacao);
	string getInformacao();
};

class Frota{ //Esta classe vai ser usada para mostrar todos os comboios que existem
	vector <AlfaPendular *> alfas;
	vector <Intercidades *> inters;
public:
	void adicionaAlfa(AlfaPendular *a1);
	void adicionaInter(Intercidades *I1);
	string getInformacao();
};


#endif
*/
