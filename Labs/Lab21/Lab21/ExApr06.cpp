#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int n{ 0 };
	bool completou{ false };
	while (!completou)
	{
		n++;
		bool dividiu{ true };
		for (size_t i = 1; i <= 20; i++)
		{
			if (n % i != 0) 
			{
				dividiu = false;
				//break;
			}
		}

		completou = dividiu;
	}

	cout << n;

	return 0;
}