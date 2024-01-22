#include <iostream>

using namespace std;

inline double max(double x, double y)
{
	return (x > y) ? x : y;
}

inline double min(double x, double y)
{
	return (x < y) ? x : y;
}

inline double absolute(double x)
{
	return (x < 0) ? x * -1 : x;
}

inline char uppercase(char x)
{
	return toupper(x);
}

int main() 
{
	cout << max(7, 8) << endl;
	cout << max(8, 7) << endl << endl;
	cout << min(7, 8) << endl;
	cout << min(8, 7) << endl << endl;
	cout << absolute(9.4) << endl;
	cout << absolute(-9.4) << endl;
	cout << absolute(0) << endl << endl;
	cout << uppercase('a');
	cout << uppercase('B');

	return 0;
}