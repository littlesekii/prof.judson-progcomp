// CalcMedia.cpp – calcula a média das avaliações
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3, media;
	cout << "Calculando a média" << endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "Nota 1: ";
	cin >> n1;
	cout << "Nota 2: ";
	cin >> n2;
	cout << "Nota 3: ";
	cin >> n3;
	cout << endl;
	media = (n1 + n2 + n3) / 3;
	cout << "A média das notas: " << media;
	cout << endl;
	return 0;
}