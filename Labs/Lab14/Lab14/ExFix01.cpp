#include <iostream>
using namespace std;
int main()
{
	int x, * p, ** q, *** r, **** s;
	p = &x;
	q = &p;
	r = &q;
	s = &r;
	x = 10;

	cout << "x" << endl;
	cout << x << endl;

	cout << endl << "p" << endl;
	cout << p << endl; 
	cout << *p << endl;

	cout << endl << "q" << endl;
	cout << *q << endl;
	cout << q << endl;
	cout << **q << endl; //resposta

	cout << endl << "r" << endl;
	cout << **r << endl; 
	cout << *r << endl;
	cout << r << endl;
	cout << ***r << endl;

	cout << endl << "s" << endl;
	cout << ***s << endl;
	cout << **s << endl; 
	cout << *s << endl; 
	cout << s << endl; 
	cout << ****s << endl;

}