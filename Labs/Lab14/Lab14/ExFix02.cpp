#include <iostream>
#include "utils.h"

using namespace std;

int main() {
	UTF8_CMD();

	char caractere{ 'A' };

	char* ptrCaractere = &caractere;
	*ptrCaractere = 'B';

	cout << "Variável: " << caractere;
	cout << endl;
	cout << "Ponteiro: " << *ptrCaractere;

	return 0;
}
