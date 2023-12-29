#include <iostream>

using namespace std;

enum sem { DOM, SEG, TER, QUA, QUI, SEX, SAB };

int main() {
	system("chcp 1252 > nil");

	char semana[7][10]{ "Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta","Sábado" };

	for (sem i = DOM; i <= SAB; i = sem(i + 1))
		cout << semana[i] << endl;

	return 0;
}
