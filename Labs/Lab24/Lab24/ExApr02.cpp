#include <iostream>
#include <fstream>

using namespace std;

struct soldado
{
	char nome[51];
	unsigned eliminacoes;
	unsigned mortes;
	float kd;
	unsigned partidas;
};

void gravaSoldado(soldado*);
void mostraSoldado(const soldado*);

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("soldado.bin", ios::in | ios::binary);

	char escolha;
	if (fin.is_open())
	{		
		cout << "[N]ovo soldado(sobrescreve o anterior)\n";
		cout << "[A]tualiza soldado(com os dados da última partida)\n";
		cout << "[E]xibe soldado(atual)\n";
		cout << "[S]air";

		cout << endl << endl;
		cout << "Escolha [_]\b\b";
		cin >> escolha;

		cout << endl;

	}
	else
		escolha = 'n';

		
	switch (char(tolower(escolha))) 
	{
		case 'n':
		{
			soldado sol{};

			cout << "Novo soldado\n";
			cout << "------------\n";
			cout << "Nome: ";
			cin.ignore();
			cin.getline(sol.nome, 51);
			
			cout << endl;
			gravaSoldado(&sol);

			break;
		}
		case 'a':
		{
			soldado sol{};
			fin.read((char*)(&sol), sizeof(sol));

			cout << "Atualizar soldado\n";
			cout << "-----------------\n";
			cout << "Eliminações: ";
			cin >> sol.eliminacoes;
			cout << "Mortes: ";
			cin >> sol.mortes;

			sol.kd = (1.0f * sol.eliminacoes) / sol.mortes;
			sol.partidas++;

			cout << endl;
			gravaSoldado(&sol);

			break;
		}
		case 'e':
		{
			soldado sol{};
			fin.read((char*)(&sol), sizeof(sol));

			mostraSoldado(&sol);
			break;
		}
	}

	fin.close();
	return EXIT_SUCCESS;
}

void gravaSoldado(soldado* sol) {

	ofstream fout;
	fout.open("soldado.bin", ios::out, ios::binary);

	if (fout.is_open())
	{
		fout.write((char*)(sol), sizeof(*sol));
		cout << "Soldado salvo com sucesso!";
	}
	else
		cout << "Não foi possível abrir o arquivo.";

	fout.close();
}

void mostraSoldado(const soldado* sol) {
	cout << "Soldado atual\n";
	cout << "-------------\n";
	cout << "Nome: " << sol->nome << endl;
	cout << "Eliminações: " << sol->eliminacoes << endl;
	cout << "Mortes " << sol->mortes << endl;
	cout << "K/D: " << sol->kd << endl;
	cout << "Partidas: " << sol->partidas << endl;
}