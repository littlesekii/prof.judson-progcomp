#include <iostream>

using namespace std;

void mostrar(const char*, bool def = false);

int main() 
{
	system("chcp 1252 > nil");

	mostrar("O rato roeu a roupa do rei de roma.");
	cout << endl;
	mostrar("O rato roeu a roupa do rei de roma.");
	cout << endl;
	mostrar("O rato roeu a roupa do rei de roma.", true);
	cout << endl;
	mostrar("O rato roeu a roupa do rei de roma.", true);
	cout << endl;
	mostrar("O rato roeu a roupa do rei de roma.");
	cout << endl;
	mostrar("O rato roeu a roupa do rei de roma.", true);

	return 0;
}

void mostrar(const char* texto, bool mostrarMais)
{
	static int chamadas{};
	cout << texto << endl;

	if (mostrarMais)
		for (size_t i = 1; i < chamadas; i++)
			cout << texto << endl;

	chamadas++;
}