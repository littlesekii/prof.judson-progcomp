#include <iostream>
using namespace std;

void (*OnClick)(void);

// -------------------------------
// crie aqui a função CreateButton
// -------------------------------

void CreateButton(int, int, void (*)(void));

void Mensagem()
{
	cout << "Botão Pressionado!" << endl;
}

int main()
{
	system("chcp 1252 > nil");

	CreateButton(10, 10, Mensagem);

	cout << endl;
	// simulando pressionamento
	cout << "Pressionar Botão? ";

	char resposta;

	cin >> resposta;

	if (resposta == 'S' || resposta == 's')
		(*OnClick)();

	return 0;
}

void CreateButton(int x, int y, void (*event)(void))
{
	cout << "Botão criado na posição " << x << ", " << y;

	OnClick = *event;
}