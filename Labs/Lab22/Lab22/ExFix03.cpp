#include <iostream>
#include <cctype>

using namespace std;

enum class PREF_ID 
{
	NOME,
	CARGO,
	APELIDO
};

struct funcionario
{
	char nome[50]; // nome do funcionário
	char cargo[50]; // cargo que ocupa na empresa
	char apelido[50]; // apelido do funcionário
	PREF_ID pref; // 0 = nome, 1 = cargo, 2 = apelido
};


int main()
{
	system("chcp 1252 > nil");

	funcionario manos[4]
	{
		{ "Davi", "CTO", "Baca", PREF_ID::APELIDO },
		{ "João", "CEO", "Alvarenga", PREF_ID::NOME },
		{ "Igor", "CPO", "Santérico", PREF_ID::CARGO },
		{ "Pedro", "CMO", "Pedrin", PREF_ID::NOME },
	};

	cout << "Listagem de Funcionários\n\n"
		"   a. Mostrar por nome\n"
		"   b. Mostrar por cargo\n"
		"   c. Mostrar por apelido\n"
		"   d. Mostrar por preferência\n"
		"   e. Sair\n";

	char option;

	cout << endl;
	cout << "Digite sua opção: ";
	cin >> option;

	while (option != 'e')
	{
		switch (option)
		{
			case 'a':
			{
				for (funcionario& mano : manos)
					cout << mano.nome << "\n";
				break;
			}

			case 'b':
			{
				for (funcionario& mano : manos)
					cout << mano.cargo << "\n";
				break;
			}

			case 'c':
			{
				for (funcionario& mano : manos)
					cout << mano.apelido << "\n";
				break;
			}

			case 'd':
			{
				for (funcionario& mano : manos) 
				{
					switch (mano.pref)
					{
						case PREF_ID::NOME:
							cout << mano.nome << "\n";
							break;
						case PREF_ID::CARGO:
							cout << mano.cargo << "\n";
							break;
						case PREF_ID::APELIDO:
							cout << mano.apelido << "\n";
							break;
					}
					
				}
				break;
			}
		}
		
		cout << endl;
		cout << "Digite sua opção: ";
		cin >> option;
	}

	cout << "Você escolheu sair.";

	return 0;
}