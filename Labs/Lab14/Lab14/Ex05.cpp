#include <iostream>
#include "utils.h"

using namespace std;

int main(void) {
	UTF8_CMD();

	int* ptr = (int*)0x01;
	cout << *ptr;


	return 0;
}