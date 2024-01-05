#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Portuguese");

	char jogadorTime[101]{};

	cout << "Digite o jogador/time: " << "";
	cin >> jogadorTime;

	int i{};
	for (; jogadorTime[i] != '/'; i++) {}

	char* time{ &jogadorTime[i + 1] };

	cout << "O nome do jogador tem " << i << " letras.\n";
	cout << "O seu time é o " << time;
}