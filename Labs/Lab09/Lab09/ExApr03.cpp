#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	float n1;
	cout << "Digite um n�mero real: ";
	cin >> n1;

	cout << "A parte inteira: " << int(n1);
	cout << endl;
	cout << "A parte fracion�ria: " << n1 - int(n1);

	return 0;
}