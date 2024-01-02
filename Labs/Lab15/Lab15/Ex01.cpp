#include <iostream>

using namespace std;

int main(void) {
	system("chcp 1252 > nil");

	unsigned short arraySize;

	cout << "Digite o tamanho do vetor: ";
	cin >> arraySize;

	cout << "Criando vetor para " << arraySize << " inteiros...";

	int* intArray = new int[arraySize] {};

	intArray[0] = 1;
	intArray[arraySize - 1] = arraySize;

	cout << "\n";

	cout << intArray[0] << " - " << intArray[arraySize - 1];

	delete[] intArray;

	return 0;
}

