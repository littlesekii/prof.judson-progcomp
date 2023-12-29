#include <iostream>

using namespace std;

enum TIPO_COR {
	COR_NOME,
	COR_NUMERO,
	COR_CODIGO,
};

union corCarro {
	char nome[10];
	int numero;
	char codigo[4];
};

struct carro {
	char modelo[101];
	unsigned short ano;
	corCarro cor;
	double preco;
	TIPO_COR tipoCor;
};


int main(int argc, char* argv[]) {
	system("chcp 1252 > nil");

	carro carros[10]{
		{ "Vectra", 2009, "Azul", 58'000.00, COR_NOME },
		{ "Polo", 2008, "Preto", 45'000.00, COR_NOME },
	};

	carro carroNovo{};

	cout << "Entre com as informações do carro...\n";

	cout << "Modelo: ";
	cin.getline(carroNovo.modelo, (sizeof carroNovo.modelo) / sizeof(char));

	cout << "Ano: ";
	cin >> carroNovo.ano;

	cout << "Tipo COR (0 - Nome, 1 - Número, 2 - Código): ";

	int tipoCor{};
	cin >> tipoCor;
	carroNovo.tipoCor = TIPO_COR(tipoCor);

	cout << "Cor: ";
	switch (carroNovo.tipoCor) {
	case COR_CODIGO:
		cin >> carroNovo.cor.codigo;
		break;
	case COR_NUMERO:
		cin >> carroNovo.cor.numero;
		break;
	default:
		cin >> carroNovo.cor.nome;
		break;
	}

	cout << "Preço: R$";
	cin >> carroNovo.preco;

	system("cls");

	carros[2] = carroNovo;
	
	unsigned short qtdCarros = sizeof(carros) / sizeof(carro);
	for (int i = 0; i < qtdCarros; i++) {

		if (carros[i].ano == 0)
			break;

		cout << "Carro #" << i + 1;
		cout << "\nModelo: " << carros[i].modelo;
		cout << "\nAno: " << carros[i].ano;
		cout << "\nCor: ";
		switch (carros[i].tipoCor) {
		case COR_CODIGO:
			cout << carros[i].cor.codigo;
			break;
		case COR_NUMERO:
			cout << carros[i].cor.numero;
			break;
		default:
			cout << carros[i].cor.nome;
			break;
		}

		cout << fixed;
		cout.precision(2);
		cout << "\nPreço: R$" << carros[i].preco;
		cout << defaultfloat;

		cout << endl << endl;
	}

	return 0;
}