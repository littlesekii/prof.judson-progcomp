#include <iostream>

using namespace std;

bool testarBit(unsigned char, int);
void exibirBits(int);

int main() {
	system("chcp 1252 > nil");

	int value;
	cout << "Digite o valor entre 0 e 255: ";
	cin >> value;

	exibirBits(value);

	return 0;
}

bool testarBit(unsigned char value, int position) {
	unsigned char tester{ 1 };
	tester <<= position;

	return value & tester;
}

void exibirBits(int value) {
	cout << "O número " << value << " em binário é ";
	cout << testarBit(value, 7);
	cout << testarBit(value, 6);
	cout << testarBit(value, 5);
	cout << testarBit(value, 4);
	cout << testarBit(value, 3);
	cout << testarBit(value, 2);
	cout << testarBit(value, 1);
	cout << testarBit(value, 0);
}