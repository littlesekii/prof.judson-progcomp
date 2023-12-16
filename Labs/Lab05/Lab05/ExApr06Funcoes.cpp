#include "ExApr06Funcoes.h"

#include <cmath>

float anguloVetor(float x, float y) {
	float rad = atan2(y, x);
	float degrees = rad * 180 / 3.14159;
	return degrees;
}

float moduloVetor(float x, float y) {
	return sqrt(pow(x, 2) + pow(y, 2));
}