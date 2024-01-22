#include <iostream>
using namespace std;

struct Controller
{
	char name[40];
	int buttons;
	int axis;
};

inline void ListarNome(Controller c) { cout << c.name; };
inline void ListarEixos(Controller c) { cout << c.axis; };

void Enumerate(void(*f)(Controller))
{
	Controller vet[]
	{
		{"Joy", 8, 4},
		{"Xbox", 10, 3},
		{"Play", 8, 6},
	};

	for (auto i : vet)
	{		
		f(i);
		cout << " ";
	}
		
}

int main()
{
	Enumerate(ListarNome);
	cout << endl;
	Enumerate(ListarEixos);
}
