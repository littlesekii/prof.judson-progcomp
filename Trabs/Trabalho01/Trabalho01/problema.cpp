#include <iostream>
#include "genetico.h"

using namespace std;

int main() {

	//guardos os 6 inputs
	unsigned short solucao1, solucao2, solucao3, solucao4, solucao5, solucao6;
	cout << "Entre com 6 solu��es iniciais (n�meros entre 0 e 65535):" << endl;
	cin >> solucao1;
	cin >> solucao2;
	cin >> solucao3;
	cin >> solucao4;
	cin >> solucao5;
	cin >> solucao6;

	cout << endl << cruzamentoPontoUnico(solucao1, solucao2);
	cout << endl << cruzamentoAritmetico(solucao3, solucao4);
	cout << endl << mutacaoSimples(solucao5);
	cout << endl << mutacaoDupla(solucao6);

	return 0;
}