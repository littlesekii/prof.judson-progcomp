#include <iostream>

using namespace std;

int main() {

	// extrapola o número de dígitos significativos da mantissa
	float f1 = 24980154.845f;
	// extrapola o maior expoente possível
	float f2 = 2e10f;
	// extrapola o número de dígitos significativos da mantissa
	double d1 = 293849384958473847.394;
	// extrapola o maior expoente possível
	double d2 = 2e100;

	cout.setf(ios_base::fixed, ios_base::floatfield);

	cout << "f1 deveria ser 24980154.845           = " << f1 << endl;
	cout << "f2 deveria ser 2e40                   = " << f2 << endl;
	cout << "d1 deveria ser 293849384958473847.394 = " << d1 << endl;
	cout << "d2 deveria ser 2e315                  = " << d2 << endl;

	
	return 0;
}