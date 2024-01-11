#include <iostream>
#include <random>

using namespace std;

const int NumAulas = 66;
const float MaxPercFaltas = 0.25;

int main()
{
	system("chcp 1252 > nil");

	float notas[4]{};
	int faltas;

	for (size_t i = 0; i < 3; i++)
	{
		cout << "Nota " << i + 1 << ": ";
		cin >> notas[i];
	}

	cout << "Faltas: ";
	cin >> faltas;

	float mp = (notas[0] + notas[1] + notas[2]) / 3.0f;

	if (faltas < MaxPercFaltas * NumAulas)
		cout << "Reprovado por falta\n";
	else if (mp >= 7)
		cout << "Aprovado\n";
	else if (mp >= 3.5 && mp < 7)
	{
		cout << "4a Prova\n";
		cout << "Digite sua 4a nota: ";
		cin >> notas[3];

		if ((mp * 0.7 + notas[3] * 0.3) >= 5)
			cout << "Aprovado\n";
		else
			cout << "Reprovado\n";
	}
	else
		cout << "Reprovado\n";


	return 0;
}