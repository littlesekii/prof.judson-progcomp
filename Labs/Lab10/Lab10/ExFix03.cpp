#include <iostream>

using namespace std;

int somaVetor(int []);

int main() {

	system("chcp 1252 > nil");

	int vet[5]{ 0 };

	cout << "Digite 5 valores: ";
	cin >> vet[0];
	cin >> vet[1];
	cin >> vet[2];
	cin >> vet[3];
	cin >> vet[4];
	cout << "A soma do vetor é " << somaVetor(vet) << '.';

	return 0;
}

int somaVetor(int vet[]) {
	return vet[0] + vet[1] + vet[2] + vet[3] + vet[4];
}