#include <iostream>
#include <cctype>

using namespace std;


//fiz de uma maneira mais legau
int main()
{
	system("chcp 1252 > nil");

	float x{ 0 }, y{0};

	char operador{};

	do
	{		
		system("cls");
		switch (operador)
		{
			case '+':
				cout << x + y;
				break;
			case '-':
				cout << x - y;
				break;
			case '/':
				cout << x / y;
				break;
			case '*':
				cout << x * y;
				break;
		}
		cout << endl;
	} while (cin >> x >> operador >> y);

	return 0;
}