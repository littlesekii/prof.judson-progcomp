#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "utils.h"

using namespace std;

struct _peixe {
	const char* tipo;
	float peso;
	int comprimento;

};

void mostrarPeixe(_peixe);
void mostrarPeixeEx(_peixe* peixe);

int main(void) {
	UTF8_CMD();

	_peixe peixe{ "Piaba", 6.2, 5 };

	mostrarPeixe(peixe);
	cout << endl;
	mostrarPeixeEx(&peixe);

	return 0;
}

void mostrarPeixe(_peixe peixe) {
	char texto[101];

	sprintf(texto, "Sem ponteiro: %s com %.1fg e %dcm",
		peixe.tipo,
		peixe.peso,
		peixe.comprimento
	);

	cout << texto;
}

void mostrarPeixeEx(_peixe* peixe) {
	char texto[101];

	sprintf(texto, "Com ponteiro: %s com %.1fg e %dcm",
		peixe->tipo,
		peixe->peso,
		peixe->comprimento
	);

	cout << texto;
}