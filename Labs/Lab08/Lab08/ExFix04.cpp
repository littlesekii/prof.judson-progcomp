#include <iostream>

#define MASSA_MOL_AGUA 3.0e-23;

#define VOLUME_GALAO_AGUA 950 * 4;

using namespace std;

float moleculasAguaPorGalao(float);

int main() {

	system("chcp 1252 > nil");

	cout << "Digite a quantidade de gal�es de �gua: ";
	float galoes;
	cin >> galoes;

	cout << "Em " << galoes << " gal�es existem " << moleculasAguaPorGalao(galoes) << " mol�culas de �gua.";

	return 0;
}

float moleculasAguaPorGalao(float galoes) {
	float volumeTotal = galoes * VOLUME_GALAO_AGUA;
	return volumeTotal / MASSA_MOL_AGUA;
}