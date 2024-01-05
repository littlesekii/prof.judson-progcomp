#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	unsigned short vet[]{ 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };

	for (size_t i = 0; i < 5; i++)
		cout << "[" << vet[i] << "," << vet[9 - i] << "] ";

}