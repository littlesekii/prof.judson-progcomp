#include <iostream>
#include "utils.h"

using namespace std;

int main(void) {
	UTF8_CMD();

	double litros = 3.4;
	double* ptLitros = &litros;

	cout << ptLitros;

	return 0;
}