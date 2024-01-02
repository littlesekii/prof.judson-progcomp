#include <iostream>

using namespace std;

struct peixe {
	char tipo[20];
	float peso;
	unsigned comp;
};

int main(void) {
	system("chcp 1252 > nil");

	peixe fish;
	peixe* ptrFish = new peixe;

	delete ptrFish;

	return 0;
}

