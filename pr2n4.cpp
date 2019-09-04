#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int prx()
{
	cout <<"x";
	return 0;
}

int prt()
{
	cout << " ";
	return 0;
}

int main()
{
	for (int i = 0; i < 20; ++i) {
		for (int t = 0; t < 20-i; ++t) {
			prt();
		}

		for (int x = 0; x < i; ++x) {
			prx();
		}
		for (int x = 0; x < i; ++x) {
			prx();
		}
		cout << endl;
	}
	
	return 0;
}