#include <iostream>

using namespace std;

int subst(char* str, char c1, char c2);

int main()
{
	system("chcp 1252 > nil");

	char texto[]{ "Batata Docinha" };
	cout << subst(texto, 'a', 'o') << " ocorrências.";
	cout << endl;
	cout << texto;
	return 0;
}

int subst(char* str, char c1, char c2) 
{
	int qtd{};

	for (size_t i = 0; str[i]; i++)
	{
		if (str[i] == c1) 
		{
			str[i] = c2;
			qtd++;
		}			
	}

	return qtd;
}