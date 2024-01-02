#include <iostream>

using namespace std;

struct peixe {
	char tipo[20];
	float peso;
	unsigned comp;
};

void mostrarPeso(peixe*);

int main(void) {
	system("chcp 1252 > nil");


	int arraySize{};
	cout << "Tamanho do vetor: ";
	cin >> arraySize;

	peixe* peixes = new peixe[arraySize];

	cout << endl;
	cout << "Tipo: ";
	cin >> peixes->tipo;
	cout << "Peso: ";
	cin >> peixes->peso;
	cout << "Comprimento: ";
	cin >> peixes->comp;
	cout << endl;

	mostrarPeso(peixes);

	delete[] peixes;

	return 0;
}

void mostrarPeso(peixe* peixes) {
	cout << "O peso do peixe é de " << peixes->peso << " gramas.";
}
