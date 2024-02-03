#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <fstream>
#include <random>

using namespace std;

const int qtdCartasMao{ 4 };

/* REGISTROS */
struct Carta
{
	char nome[11];
	int forca;
	int defesa;
	int velocidade;
	float magia;
};

struct Jogador
{
	char nome[11];
	Carta* mao[qtdCartasMao];
	int vitorias;
};
/* REGISTROS */

/* VARIÁVEIS GLOBAIS */
Carta* baralho;
int qtdCartasBaralho{ 0 };
/* VARIÁVEIS GLOBAIS */

/* FUNÇÕES */
inline void pausarTela();
inline void limparTela();
void erro(const char*);
void sucesso(const char*);

void carregarBaralho();
void sortearCartas(Carta**, int);

char jogo();
/* FUNÇÕES */

int main()
{
	system("chcp 1252 > nil");

	//CARRREGA O BARALHO
	carregarBaralho();

	cout << "Super Trunfo FNAF\n";
	cout << "-----------------\n";

	cout << "Iniciar nova partida? [S/N] ";
	char escolha;
	cin >> escolha;
	escolha = tolower(escolha);

	while (escolha == 's')
	{
		escolha = jogo();		
	}

	delete[] baralho;
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

char jogo()
{
	Jogador jogador[2]{};

	cout << "Jogador 1: ";
	cin >> jogador[0].nome;

	sortearCartas(jogador[0].mao, qtdCartasMao);

	cout << "Jogador 2: ";
	cin >> jogador[1].nome;

	sortearCartas(jogador[1].mao, qtdCartasMao);
	limparTela();
	/****************************************************/

	//JOGO
	bool jogadorAtual = 0;

	//roda 4 rodadas
	for (size_t i = 0; i < qtdCartasMao; i++)
	{
		Carta* cartaAtual[2] { 
			jogador[0].mao[i], 
			jogador[1].mao[i] 
		};

		//FASE DE ESCOLHA
		int escolha{1};
		do
		{
			if (escolha <= 0 || escolha > qtdCartasMao)
			{
				cout << endl;
				erro("Opção inválida!");
			}

			cout << "[" << jogador[jogadorAtual].nome << "]\n\n";

			cout << "Carta: " << cartaAtual[jogadorAtual]->nome << "\n";
			cout << "1. Força\n";
			cout << "2. Defesa\n";
			cout << "3. Velocidade\n";
			cout << "4. Magia\n";
			cout << "Escolha um atributo [_]\b\b";
			cin >> escolha;

			limparTela();
		} while (escolha <= 0 || escolha > qtdCartasMao);


		//FASE DE CÁLCULO
		switch (escolha)
		{
			case 1:
			{

				cout << "[" << jogador[jogadorAtual].nome << "] "
					<< cartaAtual[jogadorAtual]->nome << " | "
					<< cartaAtual[jogadorAtual]->forca;
				cout << endl;

				cout << "[" << jogador[!jogadorAtual].nome << "] "
					<< cartaAtual[!jogadorAtual]->nome << " | "
					<< cartaAtual[!jogadorAtual]->forca;
				cout << endl;

				cout << endl;

				if (cartaAtual[jogadorAtual]->forca > cartaAtual[!jogadorAtual]->forca) 
				{
					jogador[jogadorAtual].vitorias++;
				}
				else if (cartaAtual[jogadorAtual]->forca == cartaAtual[!jogadorAtual]->forca)
				{
					jogador[jogadorAtual].vitorias++;
					jogador[!jogadorAtual].vitorias++;
				}
				else
				{
					jogador[!jogadorAtual].vitorias++;
				}
				
				break;
			}
			case 2:
			{
				cout << "[" << jogador[jogadorAtual].nome << "] "
					<< cartaAtual[jogadorAtual]->nome << " | "
					<< cartaAtual[jogadorAtual]->defesa;
				cout << endl;

				cout << "[" << jogador[!jogadorAtual].nome << "] "
					<< cartaAtual[!jogadorAtual]->nome << " | "
					<< cartaAtual[!jogadorAtual]->defesa;
				cout << endl;
				cout << endl;

				if (cartaAtual[jogadorAtual]->defesa > cartaAtual[!jogadorAtual]->defesa)
				{
					jogador[jogadorAtual].vitorias++;
				}
				else if (cartaAtual[jogadorAtual]->defesa == cartaAtual[!jogadorAtual]->defesa)
				{
					jogador[jogadorAtual].vitorias++;
					jogador[!jogadorAtual].vitorias++;
				}
				else
				{
					jogador[!jogadorAtual].vitorias++;
				}

				break;
			}
			case 3:
			{
				cout << "[" << jogador[jogadorAtual].nome << "] "
					<< cartaAtual[jogadorAtual]->nome << " | "
					<< cartaAtual[jogadorAtual]->velocidade;
				cout << endl;

				cout << "[" << jogador[!jogadorAtual].nome << "] "
					<< cartaAtual[!jogadorAtual]->nome << " | "
					<< cartaAtual[!jogadorAtual]->velocidade;
				cout << endl;
				cout << endl;

				if (cartaAtual[jogadorAtual]->velocidade > cartaAtual[!jogadorAtual]->velocidade)
				{
					jogador[jogadorAtual].vitorias++;
				}
				else if (cartaAtual[jogadorAtual]->velocidade == cartaAtual[!jogadorAtual]->velocidade)
				{
					jogador[jogadorAtual].vitorias++;
					jogador[!jogadorAtual].vitorias++;
				}
				else
				{
					jogador[!jogadorAtual].vitorias++;
				}
				break;
			}
			case 4:
			{
				cout << "[" << jogador[jogadorAtual].nome << "] "
					<< cartaAtual[jogadorAtual]->nome << " | "
					<< cartaAtual[jogadorAtual]->magia;
				cout << endl;

				cout << "[" << jogador[!jogadorAtual].nome << "] "
					<< cartaAtual[!jogadorAtual]->nome << " | "
					<< cartaAtual[!jogadorAtual]->magia;
				cout << endl;
				cout << endl;

				if (cartaAtual[jogadorAtual]->magia > cartaAtual[!jogadorAtual]->magia)
				{
					jogador[jogadorAtual].vitorias++;
				}
				else if (cartaAtual[jogadorAtual]->magia == cartaAtual[!jogadorAtual]->magia)
				{
					jogador[jogadorAtual].vitorias++;
					jogador[!jogadorAtual].vitorias++;
				}
				else
				{
					jogador[!jogadorAtual].vitorias++;
				}

				break;
			}
		}

		cout << "PLACAR: " << jogador[0].nome << " " << jogador[0].vitorias << " x "
			<< jogador[1].vitorias << " " << jogador[1].nome << "\n\n";

		pausarTela();
		limparTela();

		//ALTERA O JOGADOR ATUAL
		jogadorAtual = !jogadorAtual;
	}

	/****************************************************/
	limparTela();

	char output[61]{};

	if (jogador[0].vitorias > jogador[1].vitorias)
		sprintf(output, "Parabéns, %s, você ganhou!", jogador[0].nome);
	else if (jogador[0].vitorias == jogador[1].vitorias)
		sprintf(output, "Empate!");
	else
		sprintf(output, "Parabéns, %s, você ganhou!", jogador[1].nome);
	
	sucesso(output);

	cout << "Iniciar nova partida? [S/N] ";
	char escolha;
	cin >> escolha;
	escolha = tolower(escolha);

	return escolha;
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
			qtdCartasBaralho = headerAmount;

			//instancia o baralho com qtdCartasBaralho cartas
			baralho = new Carta[qtdCartasBaralho];

			fin.read((char*)(baralho), sizeof(Carta) * qtdCartasBaralho);			
		}


		cout << endl;
		sucesso("Um baralho pré-existente foi carregado.");
	}
	else
	{
		cout << endl;
		erro("Não foi possível carregar o baralho.");
	}
	fin.close();
}

void sortearCartas(Carta** mao, int size)
{
	srand(time(NULL));
	rand();

	for (size_t i = 0; i < size; i++)
	{
		int randomIndex{ rand() % qtdCartasBaralho };
		mao[i] = &baralho[randomIndex];
	}
}
