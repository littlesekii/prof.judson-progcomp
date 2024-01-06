#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	short max;

	cout << "Você quer que eu conte de 1 até que número? ";
	cin >> max;

	for (short i{ 1 }; i <= max; i++)
		cout << i << " ";
	cout << endl;

	for (short i{ max }; i >= 1; i--)
		cout << i << " ";
	cout << endl;

	for (short i{ 1 }; i <= max; i += 2)
		cout << i << " ";
	cout << endl;

	for (short i{ max - 1 }; i >= 1; i -= 2)
		cout << i << " ";
	cout << endl;

	for (short i{ 2 }; i <= max; i += 2)
		cout << i << " ";
	cout << endl;

	for (short i{ max }; i >= 1; i -= 2)
		cout << i << " ";
	cout << endl;


	/*for (short i{ 0 }; i < max;)
		cout << ++i << " ";
	cout << endl;

	for (short i{ max }; i > 0;)
		cout << i-- << " ";
	cout << endl;

	for (short i{ 0 }; i < max; i++)
		cout << ++i << " ";
	cout << endl;

	for (short i{ max }; i > 0; i--)
		cout << --i << " ";
	cout << endl;

	for (short i{ 0 }; i < max;)
		cout << (i += 2) << " ";
	cout << endl;

	for (short i{ max }; i > 0; i -= 2)
		cout << i << " ";
	cout << endl;*/

	return 0;
}