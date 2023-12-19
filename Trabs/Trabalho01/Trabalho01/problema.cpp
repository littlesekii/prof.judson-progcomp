#include <iostream>
#include "genetico.h"

using namespace std;

int main() {

	system("chcp 1252 > nil");

	//guardos os 6 inputs
	unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6;
	cout << "Entre com 6 soluções iniciais (números entre 0 e 65535):" << endl;
	cin >> solucao1;
	cin >> solucao2;
	cin >> solucao3;
	cin >> solucao4;
	cin >> solucao5;
	cin >> solucao6;

	unsigned short solucao7, solucao8, solucao9, solucao10;
	solucao7 = cruzamentoPontoUnico(solucao1, solucao2);
	solucao8 = cruzamentoAritmetico(solucao3, solucao4);
	solucao9 = mutacaoSimples(solucao5);
	solucao10 = mutacaoDupla(solucao6);

	bool resultado;

	cout << "Resultado da Avaliação" << endl;
	cout << "-----------------------" << endl;

	resultado = avaliar(solucao1);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao2);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao3);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao4);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao5);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao6);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	cout << "-----------------------" << endl;

	resultado = avaliar(solucao7);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao8);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao9);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	cout << endl;

	resultado = avaliar(solucao10);
	if (resultado)
		cout << "\033[32m" << "OK" << "\033[m";
	else
		cout << "\033[31m" << "X" << "\033[m";

	return 0;
}