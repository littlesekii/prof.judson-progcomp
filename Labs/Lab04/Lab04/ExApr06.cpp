#include <iostream>

using namespace std;

int Inicializar();
void ligar();
void verificar();
void ativar();

int main(void) {

	system("chcp 1252 > nil");

	int x = Inicializar();


	cout << endl;
	if (x > 16384)
		cout << "Sistema em funcionamento.";
	else
		cout << "Falha na inicializa��o.";

	return 0;
}

int Inicializar() {
	cout << "Inicializando sistema:" << endl;

	ligar();
	verificar();
	ativar();

	cout << "Inicializa��o conclu�da." << endl;

	srand(time(NULL));
	rand();
	return rand();
}

void ligar() {
	cout << "- Ligando dispositivos" << endl;
}

void verificar() {
	cout << "- Verificando integeridade" << endl;
}

void ativar() {
	cout << "- Ativando processos" << endl;
}