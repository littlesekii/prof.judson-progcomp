#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int sumOfSquares{ 0 };
	int squareOfSum{ 0 };

	int diff;

	for (size_t i{ 1 }; i <= 100; i++) {
		sumOfSquares += i * i; 
		squareOfSum += i;
	}
	squareOfSum *= squareOfSum;

	diff = squareOfSum - sumOfSquares;

	cout << "A diferença entre as somas é " << diff;

	return 0;
}