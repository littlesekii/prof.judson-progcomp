#include <iostream>

using namespace std;

void main()
{
	int segundos, minutos;
	cout << "Digite uma quantidade de minutos: ";
	cin >> minutos;

	segundos = 60 * minutos;
	cout << "Existem " << segundos << " segundos em "
		<< minutos << " minutos.";
		
	cout << endl;

	system("pause");
}