#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	int hh, mm;

	cout << "Que horas s�o? ";
	cin >> hh; cin.get(); cin >> mm;

	cout << "O seu rel�gio est� atrasado." << endl;
	cout << "Agora s�o " << hh + 1 << ":" << mm << ".";
}