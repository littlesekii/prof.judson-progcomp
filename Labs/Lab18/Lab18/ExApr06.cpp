#include <iostream>

using namespace std;

struct pessoa {
	char nome[101];
	unsigned short idade;
	int sexo;
};

int main()
{
	system("chcp 1252 > nil");

	int qtdPessoas{};
	int somaIdade{};

	pessoa p{};

	cin >> p.nome;
	while (strcmp(p.nome, "fim") != 0) 
	{
		cin >> p.idade;
		cin >> p.sexo;

		qtdPessoas++;
		somaIdade += p.idade;

		cin >> p.nome;
	}


	cout << "A média de idade das pessoas é " << somaIdade / float(qtdPessoas);

	return 0;
}
