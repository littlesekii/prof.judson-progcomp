#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	unsigned short vet[]{ 46, 78, 40, 96, 74, 58, 32, 56, 91, 6 };

	for (size_t i = 0; i < 10; i += 2) {
		unsigned short* p1 = &vet[i];
		unsigned short* p2 = &vet[i + 1];

		cout << "[" << *p1 << "," << *p2 << "] ";
	}

}