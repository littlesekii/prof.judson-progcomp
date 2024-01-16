#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	char c;

	cout << "Digite seu texto (@ para sair):\n";
	c = cin.get();

	while (c != '@')
	{	
		if (!isdigit(c))
			cout << char(islower(c) ? toupper(c) : tolower(c));
		else
			cout << '\b';

		c = cin.get();
	}

	return 0;
}