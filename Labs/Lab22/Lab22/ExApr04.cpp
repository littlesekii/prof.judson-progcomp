#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite o pre�o do produto e o c�digo de origem:\n";
	float preco;
	int origem;

	cin >> preco;
	cin >> origem;

	switch (origem) {
		case 1:
		case 2:
			cout << "A preced�ncia desse produto � Sul";
			break;
		case 3:
			cout << "A preced�ncia desse produto � Norte";
			break;
		case 4:
			cout << "A preced�ncia desse produto � Centro-oeste";
			break;
		case 5:
		case 6:
			cout << "A preced�ncia desse produto � Nordeste";
			break;
		case 7:
		case 8:
		case 9:
			cout << "A preced�ncia desse produto � Sudeste";
			break;
		default:
			cout << "C�digo Inv�lido";
	}

	return 0;
}