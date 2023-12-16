#include <iostream>
#include <locale>
using namespace std;

void mostrarHoras(int, int);

int main()
{
	system("chcp 1252 > nil");

	int hh, mm;
	cout << "Entre com o número de horas: ";
	cin >> hh;

	cout << "Entre com o número de minutos: ";
	cin >> mm;

	mostrarHoras(hh, mm);
}

void mostrarHoras(int hh, int mm) {
	cout << "Agora são " << hh << ":" << mm;
}
