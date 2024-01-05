#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	char string[101]{ "Batata doce e assada na chapa!" };

	for (int i = 0; i < strlen(string); i++)
		cout << string[i];

	cout << endl;

	for (int i = 0; string[i]; i++)
		cout << string[i];


	return 0;
}