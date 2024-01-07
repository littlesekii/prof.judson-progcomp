#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite números inteiros (0 para finalizar): " << endl;

	int soma{0}, n;
	cin >> n;
	while (n != 0)
	{		
		cout << "Soma parcial: " << (soma += n) << endl;
		cin >> n;
	}

	return 0;
}

