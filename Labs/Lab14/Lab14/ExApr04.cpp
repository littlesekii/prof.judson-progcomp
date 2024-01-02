#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "utils.h"

using namespace std;

enum class TIPO_IMAGEM : unsigned short {
	JPG, 
	PNG, 
	BMP
};

const char* TIPO_IMAGEM_STR[] { "JPG", "PNG", "BMP" };

struct Imagem {
	char nome[101];	
	unsigned short largura;
	unsigned short altura;
	TIPO_IMAGEM tipo;
};

void detalhes(Imagem*);

int main() {
	UTF8_CMD();

	Imagem img{
		"zeldinha_comparation.bmp", 
		720, 
		480, 
		TIPO_IMAGEM::BMP
	};

	detalhes(&img);

	return 0;
}

void detalhes(Imagem* img) {
	char output[101]{};

	sprintf(output, "A imagem \"%s\" com tamanho %dx%d tem formato %s.",
		img->nome,
		img->largura,
		img->altura,
		TIPO_IMAGEM_STR[int(img->tipo)]
	);

	cout << output;
}
