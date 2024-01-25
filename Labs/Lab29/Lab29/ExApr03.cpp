#include <iostream>
#include <string>

using namespace std;

template <typename T> void print(T a, T b)
{
	T c = a + b;
	cout << a << " + " << b << " = " << c << endl;
}

int main()
{
	string strA = "Pro";
	string strB = "gramando";
	print(1, 2);
	print(2.6, 3.7);
	print('A', 'B');
	print(strA, strB);
}
