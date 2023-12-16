#include <iostream>
#include <ctime>

using namespace std;

int main(void) {

	system("chcp 1252 > nil");

	srand(time(NULL));
	//rand(); só consegui deixar bem random executando duas vz

	cout << "Gerando número pseudoaleatório:" << endl;

	int rn = rand();
	cout << rn << endl;

	if (rn > 16834)
		cout << "GRANDE";
	else
		cout << "PEQUENO";

	return 0;
}