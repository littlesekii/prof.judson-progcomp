#include <iostream>

using namespace std;

int main() 
{
	system("chcp 1252 > nil");

	for (size_t i{0}; i < 5; i++) 
	{
		for (size_t j{0}; j <= i; j++)
			cout << "*";
		cout << endl;
	}

	for (size_t i{ 0 }; i < 5; i++) 
	{
		for (size_t j{ 4 }; j > i; j--)
			cout << "*";
		cout << endl;
	}

	return 0;
}