#include <iostream>

using namespace std;

typedef void (*acao)(void);

static inline void inserir() { cout << "Inserindo dados..."; }
static inline void remover() { cout << "Removendo dados..."; }
static inline void buscar() { cout << "Buscando dados..."; }
static inline void sair() { cout << "Saindo do sistema..."; }

int main()
{

	cout << "Menu do sistema\n\n";

	cout << "1) Inserir\n";
	cout << "2) Remover\n";
	cout << "3) Buscar\n";
	cout << "4) Sair\n";

	cout << "\nEscolha: ";

	int escolha;
	cin >> escolha;

	acao acoes[4]{ inserir, remover, buscar, sair };

	cout << endl;
	(*acoes[escolha - 1])();

	return 0;
}