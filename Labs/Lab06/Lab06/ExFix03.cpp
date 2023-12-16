#include <iostream>

using namespace std;


int main() {

	system("chcp 1252 > nil");

	short s{ 0 };
	int i{ 0 };
	long l{ 0 };
	long long ll{ 0 };

	cout.width(10); cout << left; cout << "short:";
	cout.width(8); cout << right << sizeof s << " bytes";
	cout << endl;

	cout.width(10); cout << left; cout << "int:";
	cout.width(8); cout << right << sizeof i << " bytes";
	cout << endl;

	cout.width(10); cout << left; cout << "long:";
	cout.width(8); cout << right << sizeof l << " bytes";
	cout << endl;

	cout.width(10); cout << left; cout << "long long:";
	cout.width(8); cout << right << sizeof ll << " bytes";
	cout << endl;

	cout.width(10); cout << left; cout << "Total:";
	cout.width(8); cout << right << sizeof s + sizeof i + sizeof l + sizeof ll << " bytes";

	return 0;
}
