#include <iostream>

using namespace std;

void zerosOnes(const bool*, const bool*);

int main()
{
	system("chcp 1252 > nil");

	bool vet[]{ 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 };

	zerosOnes(vet, vet + 6);
	
	return EXIT_SUCCESS;
}

void zerosOnes(const bool* start, const bool* end)
{
	int zeros{};
	int ones{};

	while (start <= end)
	{
		if (*start)
			ones++;
		else
			zeros++;

		start++;
	}

	cout << "Existem " << zeros << " zeros e " << ones << " uns na faixa indicada.";
}
