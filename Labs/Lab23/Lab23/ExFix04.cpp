#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("vol c: > vol.txt");
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("vol.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo vol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	char volumeName[101];
	char serialNumber[101];
	for (int i = 0; i < 6; i++)
		fin >> volumeName;

	for (int i = 0; i < 5; i++)
		fin >> serialNumber;

	cout << volumeName << endl;
	cout << serialNumber << endl;

	fin.close();

	return EXIT_SUCCESS;
}