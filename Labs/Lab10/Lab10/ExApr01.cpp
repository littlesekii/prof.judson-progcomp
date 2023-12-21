#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	int vet[5]{ 10, 80, 30, 45, 15 };

	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4];
	cout << endl;
	cout << "Alterar posição: ";
	int pos;
	cin >> pos;

	cout << "Novo valor: ";
	int valor;
	cin >> valor;

	vet[pos] = valor;

	cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " << vet[3] << " " << vet[4];

	return 0;
}