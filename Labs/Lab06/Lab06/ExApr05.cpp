#include <iostream>
#include <climits>

using namespace std;

void isShort(long long);
void isInt(long long);

int main() {
	system("chcp 1252 > nil");

	cout << "Digite um valor inteiro: ";
	long long val;
	cin >> val;

	isShort(val);
	cout << endl;
	isInt(val);

	return 0;
}

void isShort(long long val) {
	if (val <= SHRT_MAX and val >= SHRT_MIN)
		cout << val << " cabe em 16 bits";
	else
		cout << val << " não cabe em 16 bits";
}

void isInt(long long val) {
	if (val <= INT_MAX and val >= INT_MIN)
		cout << val << " cabe em 32 bits";
	else
		cout << val << " não cabe em 32 bits";
}