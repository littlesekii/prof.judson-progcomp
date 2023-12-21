#include <iostream>

using namespace std;

int main() {

	system("chcp 1252 > nil");


	int a, b{ 0 }, c{ 0 };
	a = 1 + 2; // linha 1
	cout << a << "\t" << b << "\t" << c << endl;
	b = 1 + a; // linha 2
	cout << a << "\t" << b << "\t" << c << endl;
	c = 1 % 5; // linha 3
	cout << a << "\t" << b << "\t" << c << endl;
	a = a + 2; // linha 4
	cout << a << "\t" << b << "\t" << c << endl;
	b = a - c; // linha 5
	cout << a << "\t" << b << "\t" << c << endl;
	b = 5 * c / 2; // linha 
	cout << a << "\t" << b << "\t" << c << endl;
	
	return 0;
}

/*	A/	B/	C/
1/	3   ?   ?
2/  3   4   ?
3/  3   4	1
4/	5	4	1
5/	5	4	1
6/	5	2	1
*/