#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nul");

	cout << "Acentua��o � poss�vel? ";

	char palavra[40];

	cin >> palavra;

	cout << endl;

	cout << palavra << endl;

	return 0;
}