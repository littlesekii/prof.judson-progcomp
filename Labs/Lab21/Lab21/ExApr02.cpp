#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int num;
	cout << "Entre com um número: ";
	cin >> num;

	bool primo{ true };
	for (size_t i = 2; i * i <= num; i++)
	{
		if (num % i == 0) {
			primo = false;
			break;
		}
	}

	if (primo)
		cout << "O número é primo.";
	else 
		cout << "O número não é primo.";

	return 0;
}