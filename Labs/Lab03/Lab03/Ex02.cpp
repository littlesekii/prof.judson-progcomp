#include <iostream>

using namespace std;

int main(void) {

	system("chcp 1252 > nul");

	cout << "Que horas são? ";

	int hh, mm;
	cin >> hh;
	cin.get();
	cin >> mm;

	/*cout.put('b');
	cout.put('u');
	cout.put('n');
	cout.put('g');
	cout.put('a');
	cout.put('s');

	cout.put('\13');
	cout.put('\13');
	cout.put('\13');*/
	
	cout << hh << " horas\n" << mm << " minutos";

	return 0;
}