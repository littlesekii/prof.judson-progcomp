#include <iostream>
#include "utils.h"

using namespace std;

void mais(int*);
int incrementa(int);

int main() {
	UTF8_CMD();

	int num{ 0 };

	cout << "Digite um valor: ";
	cin >> num;

	mais(&num);

	cout << "\nResultado ap�s mais: " << num;

	num = incrementa(num);

	cout << "\nResultado ap�s incrementa: " << num;

	return 0;
}

void mais(int* n) {
	++*n;
}

int incrementa(int n) {
	return ++n;
}
