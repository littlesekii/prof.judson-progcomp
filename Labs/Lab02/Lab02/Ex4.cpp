#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nul");

	cout << "Acentuação é possível? ";

	char palavra[40];

	cin >> palavra;

	cout << endl;

	cout << palavra << endl;

	return 0;
}