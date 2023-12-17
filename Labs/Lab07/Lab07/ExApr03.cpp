#include <iostream>
#include <climits>

using namespace std;

unsigned int bitsBaixos(unsigned int);

int main() {

	system("chcp 1252 > nil");

	unsigned int x;
	cout << "Digite um valor inteiro: ";
	cin >> x;

	cout << "Os 16 bits mais baixos desse valor correspondem ao número: " << bitsBaixos(x);

	return 0;
}

unsigned int bitsBaixos(unsigned int x) {
	unsigned int tester = { USHRT_MAX };

	return x & tester;

}