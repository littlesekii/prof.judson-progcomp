#include <iostream>

using namespace std;

bool testarBit(unsigned int, int);

int main() {

	system("chcp 1252 > nil");

	unsigned int n = 0b11001000001100010100000000000000;

	unsigned char exp = n >> (8 * 3);

	double mantissa{ 0 };

	int bitsMantissa = 23;
	for (int i = 0; i < bitsMantissa; i++) {
		if (testarBit(n, i)) {
			mantissa += 1 / pow(2, bitsMantissa - i);
		}
	}

	int signal = testarBit(n, 23) ? -1 : +1;


	cout << "EXPOENTE: " << int(exp);
	cout << endl;
	cout << "MANTISSA: " << mantissa;

	float val = signal * pow(2, exp - 127) * (1 + mantissa);


	cout << endl;
	cout << "VALOR DO PONTO FLUTUANTE: " << val;
	cout << fixed;
	cout << endl;
	cout << "VALOR DO PONTO FLUTUANTE: " << val;


	return 0;
}

bool testarBit(unsigned int value, int pos) {
	unsigned int mask{ 1 };
	mask <<= pos;

	return value & mask;
}