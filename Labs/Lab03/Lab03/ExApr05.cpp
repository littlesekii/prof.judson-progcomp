#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	int hh, mm;

	cout << "Que horas são? ";
	cin >> hh; cin.get(); cin >> mm;

	cout << "O seu relógio está atrasado." << endl;
	cout << "Agora são " << hh + 1 << ":" << mm << ".";
}