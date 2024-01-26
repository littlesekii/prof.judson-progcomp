#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cctype>
#include <cstring>
#include <fstream>

using namespace std;

/* REGISTROS */
struct Carta
{
	char nome[11];
	int forca;
	int defesa;
	int velocidade;
	float magia;
};
/* REGISTROS */

/* VARIÁVEIS GLOBAIS */
constexpr int QTD_MAXIMA_BARALHO = 32;
Carta baralho[QTD_MAXIMA_BARALHO]{};
int qtdCartasBaralho{0};
/* VARIÁVEIS GLOBAIS */

/* FUNÇÕES */
inline void pausarTela();
inline void limparTela();
void erro(const char*);
void sucesso(const char*);

char menu();

void carregarBaralho();
void salvarBaralho();

void executar(char);
void executarCadastrar();
void executarImportar();
void executarAlterar();
void executarExcluir();
void executarListar();
/* FUNÇÕES */

int main()
{
	system("chcp 1252 > nil");

	carregarBaralho();

	char escolha = menu();
	while (escolha != 's')
	{
		limparTela();
		executar(escolha);
		escolha = menu();
	}

	salvarBaralho();

	return EXIT_SUCCESS;
}

inline void pausarTela()
{
	system("pause");
}

inline void limparTela()
{
	system("cls");
}

void erro(const char* msg)
{
	cout << "\033[91m";
	cout << msg << "\n\n";
	cout << "\033[m";
}

void sucesso(const char* msg)
{
	cout << "\033[92m";
	cout << msg << "\n\n";
	cout << "\033[m";
}

char menu() 
{
	cout << "Gerador de Cartas\n";
	cout << "-----------------\n";
	cout << "(C)adastrar\n";
	cout << "(I)mportar\n";
	cout << "(A)lterar\n";
	cout << "(E)xcluir\n";
	cout << "(L)istar\n";
	cout << "(S)air\n";
	cout << endl;
	cout << "Escolha uma opção [_]\b\b";
	
	char escolha{};
	cin >> escolha;

	return tolower(escolha);
}

void carregarBaralho()
{
	ifstream fin;
	fin.open("..\\baralho.dat", ios::in | ios::binary);

	if (fin.is_open())
	{
		char headerText[8]{};
		int headerAmount{};

		fin.read(headerText, sizeof(char[8]));

		if (!strcmp(headerText, "BARALHO"))
		{
			fin.read((char*)(&headerAmount), sizeof(int));

			fin.read((char*)(&baralho), sizeof(baralho));
			
			qtdCartasBaralho = headerAmount;
		}

		
		cout << endl;
		sucesso("Um baralho pré-existente foi carregado.");
	}
	fin.close();
}

void salvarBaralho()
{
	ofstream fout;
	fout.open("..\\baralho.dat", ios::out | ios::trunc | ios::binary);

	if (fout.is_open())
	{
		const char headerText[8]{ "BARALHO" };
		const int headerAmount{ qtdCartasBaralho };

		fout.write(headerText, sizeof(headerText));
		fout.write((char*)(&headerAmount), sizeof(int));

		fout.write((char*)(&baralho), sizeof(baralho));
	}
	fout.close();

	cout << endl;
	sucesso("Baralho salvo!");
}

void executar(char escolha)
{
	switch (escolha)
	{
		case 'c':
		{
			if (qtdCartasBaralho < QTD_MAXIMA_BARALHO)
				executarCadastrar();
			else
				erro("O baralho se encontra cheio!");

			break;
		}
		case 'i':
		{
			if (qtdCartasBaralho < QTD_MAXIMA_BARALHO)
				executarImportar();
			else
				erro("O baralho se encontra cheio!");
			break;
		}
		case 'a':
		{
			if (qtdCartasBaralho > 0)
				executarAlterar();
			else
				erro("O baralho se encontra vazio!");
			
			break;
		}
		case 'e':
		{
			if (qtdCartasBaralho > 0)
				executarExcluir();
			else
				erro("O baralho se encontra vazio!");
			break;
		}
		case 'l':
		{
			executarListar();
			break;
		}
		default:
		{
			erro("Opção Inválida!");
			break;
		}
	}
}

void executarCadastrar()
{
	Carta novaCarta{};

	cout << "Cadastrar Carta\n";
	cout << "---------------\n";

	cout << "Nome: ";
	cin >> novaCarta.nome;
	cout << "Força: ";
	cin >> novaCarta.forca;
	cout << "Defesa: ";
	cin >> novaCarta.defesa;
	cout << "Velocidade: ";
	cin >> novaCarta.velocidade;
	cout << "Magia: ";
	cin >> novaCarta.magia;

	baralho[qtdCartasBaralho++] = novaCarta;

	cout << endl;
	sucesso("Carta cadastrada com sucesso!");

	pausarTela();
	limparTela();
}

void executarImportar()
{
	cout << "Importar Cartas\n";
	cout << "---------------\n";

	cout << "Arquivo: ";
	char nomeArquivo[101];
	cin >> nomeArquivo;

	cout << endl;

	ifstream fin;
	fin.open(nomeArquivo, ios::in);

	if (fin.is_open())
	{
		cout << "Importando:\n";
		bool limiteExcedido = false;
		while (!fin.eof() && !limiteExcedido)
		{
			if (qtdCartasBaralho < QTD_MAXIMA_BARALHO)
			{
				fin >> baralho[qtdCartasBaralho].nome;
				cout << baralho[qtdCartasBaralho].nome << " ";

				fin >> baralho[qtdCartasBaralho].forca;
				cout << baralho[qtdCartasBaralho].forca << " ";

				fin >> baralho[qtdCartasBaralho].defesa;
				cout << baralho[qtdCartasBaralho].defesa << " ";

				fin >> baralho[qtdCartasBaralho].velocidade;
				cout << baralho[qtdCartasBaralho].velocidade << " ";

				fin >> baralho[qtdCartasBaralho].magia;
				cout << baralho[qtdCartasBaralho].magia << " ";
				cout << endl;

				qtdCartasBaralho++;
			}
			else
				limiteExcedido = true;			
		}
		
		cout << endl;
		sucesso("Cartas importadas com sucesso!");
		if (limiteExcedido)
			erro("O limite de cartas do baralho foi excedido! Algumas cartas não foram importadas.");
	} 
	else
		erro("Não foi possível abrir o arquivo.");

	fin.close();
	
	pausarTela();
	limparTela();
}

void executarAlterar()
{

	cout << "Alterar Carta\n";
	cout << "-------------\n";

	for (size_t i = 0; i < qtdCartasBaralho; i++)
	{
		cout << i + 1 << ") " << baralho[i].nome;
		cout << endl;
	}
	cout << endl;

	cout << "Digite o número da carta: [_]\b\b";
	int posCarta;
	cin >> posCarta;
	--posCarta;

	cout << endl;
	if (posCarta >= 0 && posCarta < qtdCartasBaralho)
	{

		cout << "Alterando carta \"" << baralho[posCarta].nome << "\"...\n";

		cout << "Nome: ";
		cin >> baralho[posCarta].nome;
		cout << "Força: ";
		cin >> baralho[posCarta].forca;
		cout << "Defesa: ";
		cin >> baralho[posCarta].defesa;
		cout << "Velocidade: ";
		cin >> baralho[posCarta].velocidade;
		cout << "Magia: ";
		cin >> baralho[posCarta].magia;

		cout << endl;
		sucesso("Carta alterada com sucesso!");
	}
	else
		erro("Carta não encontrada.");

	pausarTela();
	limparTela();
}

void executarExcluir()
{

	cout << "Excluir Carta\n";
	cout << "-------------\n";

	for (size_t i = 0; i < qtdCartasBaralho; i++)
	{
		cout << i + 1 << ") " << baralho[i].nome;
		cout << endl;
	}
	cout << endl;

	cout << "Digite o número da carta: [_]\b\b";
	int posCarta;
	cin >> posCarta;
	--posCarta;

	cout << endl;
	if (posCarta >= 0 && posCarta < qtdCartasBaralho)
	{
		cout << "Excluindo a carta \"" << baralho[posCarta].nome << "\"...\n";

		for (int i = posCarta; i < qtdCartasBaralho - 1; i++)
		{
			baralho[i] = baralho[i + 1];
		}
		qtdCartasBaralho--;

		cout << endl;
		sucesso("Carta excluída com sucesso!");
	}
	else
		erro("Carta não encontrada.");

	pausarTela();
	limparTela();
}

void executarListar()
{
	cout << "Cartas no Baralho\n";
	cout << "-----------------\n";
	cout << endl;

	if (qtdCartasBaralho == 0)
		erro("Nenhuma carta presente no baralho.");
	else
		for (int i = 0; i < qtdCartasBaralho; i++)
		{
			char n[4];
			sprintf(n, "#%d", i + 1);

			cout << left;
			cout.width(5);
			cout << n;
			cout.width(10);
			cout << baralho[i].nome;

			cout << right;
			cout.width(5);
			cout << baralho[i].forca;
			cout.width(5);
			cout << baralho[i].defesa;
			cout.width(5);
			cout << baralho[i].velocidade;
			cout.width(5);
			cout << baralho[i].magia;

			cout << endl << endl;
		}

	
	pausarTela();
	limparTela();
}