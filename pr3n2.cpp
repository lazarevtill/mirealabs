#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
	string str[1][5];
	for (int i = 0; i < 1; ++i) {
		cout << "Автор, название книги, издательство, год издания, стоимость у " << i + 1 << " книги" << endl;
		for (int j = 0; j < 5; ++j) {
			cin >> str[i][j];
		}
	}
	for (int i = 0; i < 1; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << str[i][j] << endl;
		}
	}
	return 0;
}