#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int main() {
	system("chcp 1252 > nil");

	//mudei o contexto para jogos 

	char meuJogoPreferido[]{ "Chrono Trigger" };
	bool meuJogoPreferidoMencionado{ false };

	char jogo1[20]{};
	char jogo2[20]{};
	char jogo3[20]{};

	cout << "Quais seus videogames preferidos? ";
	cin.getline(jogo1, 20);
	cin.getline(jogo2, 20);
	cin.getline(jogo3, 20);

	meuJogoPreferidoMencionado = (
		strcmp(jogo1, meuJogoPreferido) == 0 ||
		strcmp(jogo2, meuJogoPreferido) == 0 ||
		strcmp(jogo3, meuJogoPreferido) == 0
	);

	char jogos[100]{ '\0' };

	strcat(jogos, jogo1);
	strcat(jogos, ", ");
	strcat(jogos, jogo2);
	strcat(jogos, " e ");
	strcat(jogos, jogo3);

	cout << jogos << " são belos jogos.";

	if (meuJogoPreferidoMencionado) {
		cout << "\nO " << meuJogoPreferido << " também é um dos meus jogos preferidos!";
	}
}


