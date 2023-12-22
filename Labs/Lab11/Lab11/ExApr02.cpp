#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	char charN[20];
	int intN;

	cout << "Entre com dois números: ";
	cin >> charN;
	cin >> intN;

	int product = atoi(charN) * intN;

	cout << product;
}

