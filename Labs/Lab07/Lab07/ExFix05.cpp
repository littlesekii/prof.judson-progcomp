#include <iostream>
#include <climits>

using namespace std;


bool testarBit(unsigned char, int);

unsigned char ligarBit(unsigned char, int);
unsigned char desligarBit(unsigned char, int);

int main() {
	system("chcp 1252 > nil");

	/*unsigned char value{ 65 };
	int bitPosition{ 5 };
	unsigned char tester{ 1 };

	tester = tester << bitPosition;

	value = value & tester;

	cout << (int) value << endl << endl;

	cout << (int) tester << " | " << UCHAR_MAX;*/



	cout << testarBit(131, 7);
	cout << endl << endl;
	cout << (int)ligarBit(0, 4);
	cout << endl << endl;
	cout << (int)desligarBit(255, 4);

	return 0;
}

bool testarBit(unsigned char value, int position) {
	unsigned char tester{ 1 };
	tester <<= position;

	return value & tester;
}

unsigned char ligarBit(unsigned char value, int position) {
	unsigned char tester{ 1 };
	tester <<= position;

	return value | tester;
}

unsigned char desligarBit(unsigned char value, int position) {
	unsigned char tester{ 1 };
	tester <<= position;
	tester = ~tester;

	return value & tester;
}