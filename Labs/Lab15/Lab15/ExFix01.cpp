#include <iostream>

using namespace std;

int main(void) {
	system("chcp 1252 > nil");

	unsigned short qtdNotas{};

	cout << "Digite o número de alunos (mínimo 2): ";
	cin >> qtdNotas;

	float* notas = new float[qtdNotas];

	cout << "Digite a nota de dois alunos:\n";
	cin >> *notas;
	cin >> *(notas + 1);

	cout << "As notas digitadas foram " << *notas << " e " << *(notas + 1);

	delete[] notas;
	return 0;
}