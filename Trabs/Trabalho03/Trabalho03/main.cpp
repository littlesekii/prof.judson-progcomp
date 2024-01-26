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

void executar(char);
void executarCadastrar();
void executarImportar();
void executarAlterar();
void executarListar();
/* FUNÇÕES */

int main()
{
	system("chcp 1252 > nil");

	char escolha = menu();
	while (escolha != 's')
	{
		limparTela();
		executar(escolha);
		escolha = menu();
	}

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

	cout << "Escolha uma opção [_]\b\b";
	
	char escolha{};
	cin >> escolha;

	return tolower(escolha);
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
			executarAlterar();
			break;
		}
		case 'e':
		{
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
	int posCarta{};
	cin >> posCarta;
	posCarta--;

	cout << endl;
	cout << "Alterando carta \"" << baralho[posCarta].nome << "\":\n";

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