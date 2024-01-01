#include <iostream>
#include "utils.h"

using namespace std;

struct RGBA {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a;
};

union color {
	RGBA rgba;
	int int32;
};

int main() {
	UTF8_CMD();

	color cor{};

	int aux{};
	cout << "Digite uma cor no formato\n";
	cout << "RGBA: ";
	cin >> aux;
	cor.rgba.r = aux;
	cin >> aux;
	cor.rgba.g = aux;
	cin >> aux;
	cor.rgba.b = aux;
	cin >> aux;
	cor.rgba.a = aux;
	cout << "Int32: ";
	cin >> cor.int32;

	return 0;
}
