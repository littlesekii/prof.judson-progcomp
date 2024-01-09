#include <iostream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	int ni[10]{ 0, 1, 0, 0, 1, 0, 1, 1, 1, 1 };

	int somatorio{};
	for (int n : ni)
		somatorio += n;

	cout << somatorio;

	return 0;

}