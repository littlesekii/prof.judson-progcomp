#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	int vogais[5]{};

	char c;
	cout << "Digite uma frase (@ para finalizar):\n";
	cin.get(c);

	while (c != '@')
	{
		switch (tolower(c)) {
			case 'a':
				vogais[0]++;
				break;
			case 'e':
				vogais[1]++;
				break;
			case 'i':
				vogais[2]++;
				break;
			case 'o':
				vogais[3]++;
				break;
			case 'u':
				vogais[4]++;
				break;
		}
		cin.get(c);
	}

	cout << "a: " << vogais[0] << endl;
	cout << "e: " << vogais[1] << endl;
	cout << "i: " << vogais[2] << endl;
	cout << "o: " << vogais[3] << endl;
	cout << "u: " << vogais[4];

	
	return 0;
}