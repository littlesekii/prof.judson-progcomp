#include <iostream>
#include <fstream>

using namespace std;

struct par
{
	int x;
	int y;
};

ostream& operator<<(ostream&, par&);

int main()
{
	system("chcp 1252 > nil");

	ifstream fin;
	fin.open("pares.txt", ios::in);
	

	cout << "Pares:";
	if (fin.is_open())
	{
		int aux{0};
		par p{};
		while (!fin.eof())
		{
			if (!aux++)
				fin >> p.x;
			else
				fin >> p.y;
			
			
			if (aux > 1)
			{
				cout << " " << p;
				aux = 0;
			}
		}
	}

	return EXIT_SUCCESS;
}

ostream& operator<<(ostream& out, par& p)
{
	out << "[" << p.x << "," << p.y << "]";
	return out;
}