#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");


	unsigned int anterior{ 0 }, atual{ 1 }, proximo{ 0 };

	//cout << 1 << " ";
	unsigned int somaPares{ 0 };
	for (size_t i = 0; proximo < 4'000'000; i++)
	{
		proximo = anterior + atual;

		if (proximo % 2 == 0)
			somaPares += proximo;

		//cout << proximo << " ";
		anterior = atual;
		atual = proximo;		
	}

	cout << "A soma é " << somaPares;

	return 0;
}