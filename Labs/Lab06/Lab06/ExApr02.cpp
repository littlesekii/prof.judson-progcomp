#include <iostream>
#include <iomanip>

using namespace std;

#define VALOR_PAO 0.30;
#define VALOR_PASTEL 0.25;

int main(void) {

	system("chcp 1252 > nil");

	cout << "P�es&Cia" << endl << endl;

	int qtdPao, qtdPastel;

	cout << "Quantos p�es? ";
	cin >> qtdPao;

	cout << "Quantos past�is? ";
	cin >> qtdPastel;

	float totalPao = qtdPao * VALOR_PAO;
	float totalPastel = qtdPastel * VALOR_PASTEL;
	float total = totalPao + totalPastel;
	cout << "O total das compras � R$" << setprecision(2) << fixed << total;

	return 0;
}