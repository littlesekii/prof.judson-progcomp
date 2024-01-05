#include <iostream>

using namespace std;

struct carro {
	char marca[51];
	unsigned short ano;
};

void main()
{
	setlocale(LC_ALL, "Portuguese");

	unsigned short qtd{};
	cout << "Quantos carros deseja catalogar? ";
	cin >> qtd;

	carro* carros = new carro[qtd];

	for (int i = 0; i < qtd; i++) {
		cout << "Carro #" << i + 1 << endl;
		cout << "Marca: ";
		cin >> (carros + i)->marca;
		cout << "Ano: ";
		cin >> (carros + i)->ano;
	}
	
	cout << endl << "Aqui está sua coleção: " << endl;
	for (int i = 0; i < qtd; i++) 
		cout << (carros + i)->marca << '\t' << (carros + i)->ano << endl;


	delete[] carros;
	


}