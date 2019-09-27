#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	int n;
	cout << "vvedite chislo " << endl;
	cin >> n;
	for (int i = 0;i < 10;i++) {
		cout << endl << n + i;
	}

	return 0;
}