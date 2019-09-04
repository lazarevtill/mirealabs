#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
	int y;
	float r;
	float m;
	cout << "Сколько денег?" << endl;
	cin >> m;
	cout << endl;
	cout << "Сколько лет?" << endl;
	cin >> y;
	cout << endl;
	cout << "Процент?" << endl;
	cin >> r;
	m = m * r/100 * y;
	cout << endl << m;
	return 0;
}