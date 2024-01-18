

#include <iostream>
#include <fstream>

using namespace std;

struct imagemColorida
{
	unsigned largura;
	unsigned altura;
};

int main()
{
	system("chcp 1252 > nil");

	cout << "Imagens Coloridas\n";
	cout << "-----------------\n";
	cout << "[A]rmazenar\n";
	cout << "[E]xibir\n";
	cout << "[S]air\n";
	cout << "-----------------\n";
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
			imagemColorida novaImagem{};
			cout << "Largura: ";
			cin >> novaImagem.largura;
			cout << "Altura: ";
			cin >> novaImagem.altura;
			cout << endl;

			ofstream fout;
			fout.open("imagemcolorida.bin", ios::out, ios::binary);

			if (fout.is_open())
			{
				fout.write((char*)(&novaImagem), sizeof(novaImagem));

				cout << "Defina " << novaImagem.altura << " cores em cada linha\n";
				for (size_t i = 0; i < novaImagem.largura; i++)
				{
					cout << "#" << i + 1 << ": ";
					for (size_t j = 0; j < novaImagem.altura; j++)
					{
						char cor[4];
						cin >> cor;

						fout.write((char*)(&cor), sizeof(cor));
					}
				}
				cout << endl;

				cout << "Imagem colorida foi armazenada.";
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
			fin.open("imagemcolorida.bin", ios::in | ios::binary);

			if (fin.is_open())
			{
				imagemColorida imagem{};
				fin.read((char*)(&imagem), sizeof(imagem));

				for (size_t i = 0; i < imagem.largura; i++)
				{
					for (size_t j = 0; j < imagem.altura; j++)
					{
						char cor[4];
						fin.read((char*)(&cor), sizeof(cor));

						cout << "\033[0;0;" << cor << "m";
						cout << " ";
						cout << "\033[m";						
					}
					cout << endl;
				}				
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