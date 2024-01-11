#include <iostream>
#include <random>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	srand(time(NULL));
	rand();

	int num = rand() % 11;

	cout << "Descubra o número de 0 a 10: " << endl;
	int input{};
	do
	{
		cin >> input;
		if (input > num)
			cout << "Muito alto!" << endl;
		else if (input < num)
			cout << "Muito baixo!" << endl;

	} while (num != input);

	cout << "Você acertou.";
}