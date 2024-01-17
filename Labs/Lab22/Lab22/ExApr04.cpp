#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite o preço do produto e o código de origem:\n";
	float preco;
	int origem;

	cin >> preco;
	cin >> origem;

	switch (origem) {
		case 1:
		case 2:
			cout << "A precedência desse produto é Sul";
			break;
		case 3:
			cout << "A precedência desse produto é Norte";
			break;
		case 4:
			cout << "A precedência desse produto é Centro-oeste";
			break;
		case 5:
		case 6:
			cout << "A precedência desse produto é Nordeste";
			break;
		case 7:
		case 8:
		case 9:
			cout << "A precedência desse produto é Sudeste";
			break;
		default:
			cout << "Código Inválido";
	}

	return 0;
}