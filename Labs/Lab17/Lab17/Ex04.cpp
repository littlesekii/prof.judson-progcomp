#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	int x;

	cout << boolalpha;
	cout << (cin >> x, x > 0) << endl;

	return 0;
}