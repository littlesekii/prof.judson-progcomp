// CalcMedia.cpp � calcula a m�dia das avalia��es
#include <iostream>
using namespace std;
int main()
{
	float n1, n2, n3, media;
	cout << "Calculando a m�dia" << endl;
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

	if (media < 7) {
		float n4;

		cout << "Sua m�dia parcial foi " << media << " entre a sua 4� nota: ";		
		cin >> n4;

		media = (n1 + n2 + n3 + n4) / 4;
	}

	cout << "A m�dia das notas: " << media;
	cout << endl;
	return 0;
}