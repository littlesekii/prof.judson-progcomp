#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

enum mes { Jan = 1, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez };

istream& operator>>(istream&, mes&);
ostream& operator<<(ostream&, mes&);

int main()
{
	system("chcp 1252 > nil");

	mes inicio, fim;

	inicio = Mar; // inicio do semestre
	fim = Jun; // fim do semestre

	cout << "Digite o número do mês atual: ";
	mes atual;
	cin >> atual;

	if (atual >= inicio && atual <= fim)
		cout << "Você está em período de aulas.\n";
	else
		cout << "Férias!\n";

	cout << "Nome do mês: " << atual;

	return 0;
}

istream& operator>>(istream& in, mes& a) {
	int iMes{};

	in >> iMes;

	a = mes(iMes);

	return in;
}

ostream& operator<<(ostream& out, mes& a) {

	char nome[10];

	switch (a)
	{
	case Jan:
		strcpy(nome, "Janeiro");
		break;
	case Fev:
		strcpy(nome, "Fevereiro");
		break;
	case Mar:
		strcpy(nome, "Março");
		break;
	case Abr:
		strcpy(nome, "Abril");
		break;
	case Mai:
		strcpy(nome, "Maio");
		break;
	case Jun:
		strcpy(nome, "Junho");
		break;
	case Jul:
		strcpy(nome, "Julho");
		break;
	case Ago:
		strcpy(nome, "Agosto");
		break;
	case Set:
		strcpy(nome, "Setembro");
		break;
	case Out:
		strcpy(nome, "Outubro");
		break;
	case Nov:
		strcpy(nome, "Novembro");
		break;
	case Dez:
		strcpy(nome, "Dezembro");
		break;
	default:
		strcpy(nome, "None");
		break;
	}

	out << nome;

	return out;
}