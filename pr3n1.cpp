#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
	int ka = 0;
	int kb = 0;
	int l;
	string a;
	getline(cin, a);
	l = a.length();
	for (int x = 0; x < l; ++x) {
		if (a[x] == 'a') {
			ka += 1;
		}
		if (a[x] == 'b') {
			kb += 1;
		}
	}
	if (ka > kb) {
		cout << "Букв а больше, их " << ka << endl;
		cout << "Букв b " << kb << endl;
	}
	else
	{
		cout << "Букв b больше, их " << kb << endl;
		cout << "Букв a " << ka << endl;

	}
	return 0;
}