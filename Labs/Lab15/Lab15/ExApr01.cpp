#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main(void) {
	system("chcp 1252 > nil");

	float peso;
	peso = 30;
	cout << peso;

	delete peso;
	delete &peso;

	return 0;
}

//n�o � poss�vel pois o delete pode ser utilizado 
//somente para apagar mem�rica alocada dinamicamente na heap, 
//vari�veis s�o alocadas automaticamente na stack