#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	for (int i = 1; i <= 64; i *= 2)
		cout << i << " ";


	return 0;
}