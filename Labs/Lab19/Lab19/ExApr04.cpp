#include <iostream>
using namespace std;

int main() {
	// Muda o código da página do console para 1252
	system("chcp 1252 > nil");

	char ascii[16][16]{};

	char current = 0;
	for (size_t i = 0; i < 16; i++)
		for (size_t j = 0; j < 16; j++)
			ascii[j][i] = current++;


	cout << ascii[4][1];

	return 0;
}