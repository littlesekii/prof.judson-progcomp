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

	cout << "\nResultado após mais: " << num;

	num = incrementa(num);

	cout << "\nResultado após incrementa: " << num;

	return 0;
}

void mais(int* n) {
	++*n;
}

int incrementa(int n) {
	return ++n;
}
