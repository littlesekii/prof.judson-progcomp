#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");


	int n1, n2;
	cout << "Digite dois números inteiros: ";
	cin >> n1;
	cin >> n2;

	cout << "O quociente " << n1 << "/" << n2 << " é " << n1 / n2;
	cout << endl;
	cout << "O resto da divisão " << n1 << "%" << n2 << " é " << n1 % n2;

	return 0;
}