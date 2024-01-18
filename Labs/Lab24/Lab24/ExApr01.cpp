#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ofstream foutbin;
	ofstream fout;

	foutbin.open("inteiros100.bin", ios::out, ios::binary);
	fout.open("inteiros100.txt", ios::out);

	if (foutbin.is_open() && fout.is_open())
	{
		for (size_t i = 1; i <= 100; i++)
		{
			foutbin.write((char*)(&i), sizeof(i));
			fout << i;
		}
	}
	else
		cout << "Não foi possível abrir os arquivos.";

	foutbin.close();
	fout.close();

	return EXIT_SUCCESS;
}