#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int num;
	cout << "Entre com um n�mero: ";
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
		cout << "O n�mero � primo.";
	else 
		cout << "O n�mero n�o � primo.";

	return 0;
}