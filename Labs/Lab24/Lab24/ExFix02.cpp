

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("vet.dat", ios::in | ios::binary);

	if (fin.is_open())
	{
		cout << "O arquivo vet.dat contém:\n";

		int n{}, size{};
		fin.read((char*)(&size), sizeof(size));

		for (size_t i = 0; i < size; i++)
		{
			fin.read((char*)(&n), sizeof(n));
			cout << n << " ";
		}
		cout << endl << endl;
	}
	fin.close();

	ofstream fout;
	fout.open("vet.dat", ios::out | ios::ate | ios::binary);

	cout << "Digite números inteiros (0 para encerrar): " << endl;

	int n{}, size{};
	fout.write((char*)(&n), sizeof(n));
	while (cin >> n, n != 0)
	{
		fout.write((char*)(&n), sizeof(n));
		size++;
	}

	fout.seekp(0, ios_base::beg);
	fout.write((char*)(&size), sizeof(size));
	fout.close();

	return EXIT_SUCCESS;
}