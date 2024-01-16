#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int qtdPrimos{};

	bool primo{ true };

	for (size_t i = 2; qtdPrimos < 168; i++)
	{
		primo = true;
		for (size_t j = 2; j * j <= i; j++)
		{
			if (i % j == 0) {
				primo = false;
				break;
			}
		}

		if (primo)
		{	
			qtdPrimos++;
			if(qtdPrimos == 168)
				cout << i << " ";
			
		}
			
	}

	return 0;
}