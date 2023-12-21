#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	float preco[3]{ 1.5f, 2.0f, 1.0f };
	float quantidade[3];

	cout << "Prezado Cliente";
	cout << endl;
	cout << "Digite a quantidade de quilos desejados: ";
	cout << endl;
	cout << "Alface: ";
	cin >> quantidade[0];
	cout << "Beterraba: ";
	cin >> quantidade[1];
	cout << "Cenoura: ";
	cin >> quantidade[2];


	float total[3];
	total[0] = preco[0] * quantidade[0];
	total[1] = preco[1] * quantidade[1];
	total[2] = preco[2] * quantidade[2];

	cout << fixed;
	cout.precision(2);

	cout << "Resumo da Compra";
	cout << endl;
	cout << "----------------------";
	cout << endl;
	cout << "Alface = R$" << total[0] << endl;
	cout << "Beterraba = R$" << total[1] << endl;
	cout << "Cenoura = R$" << total[2] << endl;
	cout << "----------------------";
	cout << endl;
	cout << "Total = R$" << total[0] + total[1] + total[2];

	return 0;
}