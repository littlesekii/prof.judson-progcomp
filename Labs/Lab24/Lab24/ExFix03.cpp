

#include <iostream>
#include <fstream>

using namespace std;

struct mensagemColorida
{
	char msg[80];
	char txtColor[4];
	char bgColor[4];
};

int main()
{
	system("chcp 1252 > nil");

	cout << "Mensagens Coloridas\n";
	cout << "-------------------\n";
	cout << "[A]rmazenar\n";
	cout << "[E]xibir\n";
	cout << "[S]air\n";
	cout << "-------------------\n";
	cout << "Opção: [_]\b\b";

	char option;
	cin >> option;
	cin.ignore();

	switch (option)
	{
		case 'a':
		case 'A':
		{
			cout << endl;

			mensagemColorida novaMensagem{};
			cout << "Sua mensagem: ";
			cin.getline(novaMensagem.msg, 80);
			cout << "Cor do texto: ";
			cin >> novaMensagem.txtColor;
			cout << "Cor do fundo: ";
			cin >> novaMensagem.bgColor;

			cout << endl;

			ofstream fout;
			fout.open("mensagemcolorida.bin", ios::out | ios::binary);

			if (fout.is_open())
			{
				fout.write((char*)(&novaMensagem), sizeof(novaMensagem));

				cout << "Texto colorido foi armazenado.";
			}
			else
				cout << "Não foi possível armazenar a mensagem.";

			fout.close();
			break;
		}			
		case 'e':
		case 'E':
		{
			cout << endl;

			ifstream fin;
			fin.open("mensagemcolorida.bin", ios::in | ios::binary);

			if (fin.is_open())
			{
				mensagemColorida mensagem{};
				fin.read((char*)(&mensagem), sizeof(mensagem));

				cout << "\033[0;" << mensagem.txtColor << ";" << mensagem.bgColor << "m";
				cout << mensagem.msg;
				cout << "\033[m";
			}
			else
				cout << "Não foi possível acessar a mensagem.";

			fin.close();

			break;
		}	
	}
	cout << endl;

	return EXIT_SUCCESS;
}