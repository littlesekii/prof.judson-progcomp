#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	char texto[101];
	cout << "Digite um texto: " << endl;
	cin.getline(texto, 101);

	for (size_t i{ 0 }; texto[i] != '@'; i++)
		cout << texto[i];

	return 0;
}