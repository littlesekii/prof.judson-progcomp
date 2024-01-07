#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	cout << "Digite n�meros inteiros (0 para finalizar): " << endl;

	int soma{ 0 };
	int qtd{ 0 };
	int n;
	do
	{
		cin >> n;				
		soma += n;
		qtd += (n != 0);
	} while (n != 0);

	char output[101]{};

	sprintf_s(
		output,
		(
			"Foram lidos %d n�meros\n"
			"A soma dos n�mero � %d\n"
			"A m�dia � %.2f"
		),
		qtd, soma, (float(soma) / qtd)
	);

	cout << output;

	return 0;
}

