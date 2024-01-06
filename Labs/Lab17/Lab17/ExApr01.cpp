#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	short a[5]{};
	short b[5]{};
	short s[5]{};

	cout << "Digite 10 valores: ";
	
	for (size_t i{ 0 }; i < 5; i++)
		cin >> a[i], s[i] = a[i];

	for (size_t i{ 0 }; i < 5; i++)
		cin >> b[i], s[i] += b[i];

	cout << "Vetor A: ";
	for (size_t i{ 0 }; i < 5; i++)
		cout << a[i] << " ";
	cout << endl;

	cout << "Vetor B: ";
	for (size_t i{ 0 }; i < 5; i++)
		cout << b[i] << " ";
	cout << endl;

	cout << "Vetor C: ";
	for (size_t i{ 0 }; i < 5; i++)
		cout << s[i] << " ";
	cout << endl;


	return 0;
}