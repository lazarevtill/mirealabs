#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int ascii_cod(char x)
{
	int a;
	a = x;
	return a;
}

int main()
{
	int num;
	int ka = 0;
	int kb = 0;
	int l;
	string a;
	getline(cin, a);
	l = a.length();
	for (int x = 0; x < l; ++x) {
		num = ascii_cod(a[x]);
		if ((num>=65)and(num<=122)) {
			ka += 1;
		}
		else {
			kb += 1;
		}
	}

	cout << ka << " букв " << kb << " символов" << endl;

	return 0;
}