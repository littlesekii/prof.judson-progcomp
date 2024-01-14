#include <iostream>

using namespace std;

struct contribuinte 
{
	char nome[101];
	float valor;
};

int main()
{
	system("chcp 1252 > nil");

	unsigned short qtdContribuintes;
	cout << "Digite o número de contribuintes: ";
	cin >> qtdContribuintes;
	cin.ignore();

	contribuinte* contribuintes = new contribuinte[qtdContribuintes];

	for (size_t i = 0; i < qtdContribuintes; i++)
	{
		cout << "#" << i + 1 << endl;

		cout << "Nome : ";
		cin.getline(contribuintes[i].nome, 101);
		cout << "Valor: ";
		cin >> contribuintes[i].valor;
		cin.ignore();
	}

	cout << endl;
	cout << "Grandes Patronos\n";
	for (size_t i = 0; i < qtdContribuintes; i++)
	{
		if (contribuintes[i].valor >= 10'000)
			cout << contribuintes[i].nome << " " << contribuintes[i].valor << endl;
	}
	cout << endl;
	cout << "Patronos\n";
	for (size_t i = 0; i < qtdContribuintes; i++)
	{
		if (contribuintes[i].valor < 10'000)
			cout << contribuintes[i].nome << " " << contribuintes[i].valor << endl;
	}

	delete[] contribuintes;

}