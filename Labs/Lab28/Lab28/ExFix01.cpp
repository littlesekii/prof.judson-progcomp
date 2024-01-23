#include <iostream>

using namespace std;

void funzao();


int main()
{
	system("chcp 1252 > nil");

	funzao();
	cout << endl;
	funzao();
	cout << endl;
	funzao();

	return EXIT_SUCCESS;
}

void funzao()
{
	static int chamadas{};

	cout << ++chamadas << "a chamada da função.";
}