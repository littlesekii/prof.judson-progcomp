#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

union senha 
{
	char alphanum[21];
	int numeric;
};

int main()
{
	system("chcp 1252 > nil");


	char escolha;
	cout << " O que deseja?\n\n";
	cout << "[E]xibir senha armazenada;\n";
	cout << "[G]ravar nova senha;\n";
	cout << "[S]air;\n\n";
	cout << "Escolha[_]\b\b";
	cin >> escolha;

	cout << endl;
	switch (tolower(escolha))
	{
		case 'e':
		{
			ifstream fin;
			fin.open("senha.bin", ios::in | ios::binary);

			if (fin.is_open())
			{
				int tipoSenha;
				senha pass;

				fin.read((char*)(&tipoSenha), sizeof(tipoSenha));
				fin.read((char*)(&pass), sizeof(pass));

				if (tipoSenha == 1)
					cout << pass.alphanum;
				else
					cout << pass.numeric;

			}
			else
				cout << "O arquivo não existe.";

			break;
		}
		case 'g':
		{
			cout << endl;
			ofstream fout;
			fout.open("senha.bin", ios::out | ios::binary);

			if (fout.is_open())
			{
				int tipoSenha;
				senha novaSenha;

				cout << "Modo [1]alfanumérico ou [2]númerico: ";
				cin >> tipoSenha;

				cout << "Entre com a nova senha: ";
				if (tipoSenha == 1)
					cin >> novaSenha.alphanum;
				else
					cin >> novaSenha.numeric;

				fout.write((char*)(&tipoSenha), sizeof(tipoSenha));
				fout.write((char*)(&novaSenha), sizeof(novaSenha));

				cout << endl;
				cout << "Senha atualizada com sucesso.";
			}
			else
				cout << "Falha ao abrir arquivo.";

			break;
		}
	}

	return EXIT_SUCCESS;
}
