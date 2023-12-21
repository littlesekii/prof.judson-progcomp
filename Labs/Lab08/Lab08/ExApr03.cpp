#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");

	cout << fixed;
	cout.precision(8);

	cout << 2.11111111f;
	cout << endl;
	cout << 2.12312312f;
	cout << endl;
	cout << 2.69696969f;
	cout << endl;
	cout << 2.99999999f;
	cout << endl;
	cout << 2.00000009f;

	cout << endl << endl;

	cout << 1'000'000'000.11111111;
	cout << endl;
	cout << 1'000'000'000.22222222;
	cout << endl;
	cout << 1'000'000'000.33333333;
	cout << endl;
	cout << 1'000'000'000.90000000;
	cout << endl;
	cout << 1'000'000'000.1;

	return 0;
}