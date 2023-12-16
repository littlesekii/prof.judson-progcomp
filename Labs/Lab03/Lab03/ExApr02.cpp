#include <iostream>

using namespace std;

void main()
{
	system("chcp 1252 > nil");

	int x;

	cout << "Entre com um número de 0 a 9: ";
	cin >> x;

	for (int i = 0; i < 10; i++) {
		cout << x << " x " << i << " = " << x * i;
		cout << endl;
	}

}