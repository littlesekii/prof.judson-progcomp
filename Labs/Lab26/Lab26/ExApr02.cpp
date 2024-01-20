#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cctype>

using namespace std;

/// <summary>
/// Capitilize the passed name string.
/// </summary>
/// <param name="name,">string</param>
/// <returns>If some part got capitalized returns true otherwise false.</returns>
bool capitalizarNome(unsigned char*);

int main()
{
	system("chcp 1252 > nil");

	cout << "Entre com os nomes dos aprovados (fim para encerrar):\n";

	char nome[51];
	cin.getline(nome, 51);
	while (strcmp(nome, "fim"))
	{		
		bool changed = capitalizarNome((unsigned char*)(nome));
		cout << nome << "\t<-- " << (changed ? "Corrigido" : "OK") << endl;
		cin.getline(nome, 51);
	}

	return 0;
}

bool capitalizarNome(unsigned char* nome)
{
	bool changed{false};

	//check first char
	if (islower(*nome))
	{
		*nome = toupper(*nome);
		changed = true;
	} 
	nome++;

	while (*nome)
	{
		if (isspace(*(nome - 1)))
		{
			if ((*nome == 'd' || *nome == 'D') && *(nome + 2) == ' ')
			{
				if (isupper(*nome))
				{
					*nome = tolower(*nome);
					changed = true;
				}
			}
			else
			{
				if (islower(*nome))
				{
					*nome = toupper(*nome);
					changed = true;
				}
			}
		}
		else 
		{
			if (isupper(*nome))
			{
				*nome = tolower(*nome);
				changed = true;
			}
		}
		nome++;
	}
	return changed;
}