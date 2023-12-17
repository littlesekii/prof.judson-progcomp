#include <iostream>
#include <climits>

using namespace std;

int bitsAltos(int);

int main() {

	system("chcp 1252 > nil");

	unsigned int x;
	cout << "Digite um valor inteiro: ";
	cin >> x;

	cout << "Os 16 bits mais baixos desse valor correspondem ao número: " << bitsAltos(x);

	return 0;
}

int bitsAltos(int x) {
	int tester = { USHRT_MAX };
	tester = ~tester;

	return (x & tester) >> 16;
}