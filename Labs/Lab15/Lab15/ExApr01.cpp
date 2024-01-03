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

//não é possível pois o delete pode ser utilizado 
//somente para apagar memórica alocada dinamicamente na heap, 
//variáveis são alocadas automaticamente na stack