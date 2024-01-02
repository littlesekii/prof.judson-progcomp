#include <iostream>
#include "utils.h"

using namespace std;

enum class ALIMENTO_SOPA : int {
	SOPA,
	CANJA,
};

struct Tigela {
	bool cheia;
	ALIMENTO_SOPA alimento;
};

void fome(Tigela*);

int main() {
	UTF8_CMD();

	Tigela tigela{true, ALIMENTO_SOPA::CANJA};

	Tigela* pTigela = &tigela;

	cout << "Tigela antes da janta: " << tigela.cheia;
	fome(pTigela);
	cout << "\nTigela após a janta: " << tigela.cheia;

	return 0;
}

void fome(Tigela* tigela) {
	tigela->cheia = false;
}
