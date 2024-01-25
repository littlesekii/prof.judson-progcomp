#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

struct String
{
	char* str; // ponteiro para a string
	int comp; // comprimento da string (sem contar '\0')
};

// protótipos para ajustar(), mostrar() e mostrar()
void ajustar(String&, const char*);
void mostrar(const String&, int times = 1);
void mostrar(const char*, int times = 1);

int main()
{
	String msg;
	char teste[] = "Realidade de ponteiros e strings\n";

	ajustar(msg, teste); 

	mostrar(msg); // mostra o membro String uma vez
	cout << endl;
	mostrar(msg, 2); // mostra o membro String duas vezes
	cout << endl;

	teste[0] = 'D';
	teste[1] = 'u';

	mostrar(teste); // mostra a string uma vez
	cout << endl;
	mostrar(teste, 3); // mostra a string três vezes
	cout << endl;
	mostrar("Pronto!");
	cout << endl;

	delete[] msg.str;
	return 0;
}

void ajustar(String& dest, const char* src)
{
	dest.comp = strlen(src);
	dest.str = new char[dest.comp + 1];

	strcpy(dest.str, src);
}

void mostrar(const String& str, int times)
{
	for (size_t i = 0; i < times; i++)
	{
		cout << str.str;
	}
}

void mostrar(const char* str, int times)
{
	for (size_t i = 0; i < times; i++)
	{
		cout << str;
	}
}