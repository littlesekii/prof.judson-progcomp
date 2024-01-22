#include <iostream>
using namespace std;

void (*OnClick)(void);

// -------------------------------
// crie aqui a fun��o CreateButton
// -------------------------------

void CreateButton(int, int, void (*)(void));

void Mensagem()
{
	cout << "Bot�o Pressionado!" << endl;
}

int main()
{
	system("chcp 1252 > nil");

	CreateButton(10, 10, Mensagem);

	cout << endl;
	// simulando pressionamento
	cout << "Pressionar Bot�o? ";

	char resposta;

	cin >> resposta;

	if (resposta == 'S' || resposta == 's')
		(*OnClick)();

	return 0;
}

void CreateButton(int x, int y, void (*event)(void))
{
	cout << "Bot�o criado na posi��o " << x << ", " << y;

	OnClick = *event;
}