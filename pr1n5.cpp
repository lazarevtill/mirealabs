#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int main()
{
	double b;		double x=0;
	double arr[5];
	int a=0;
	// Заполняем массив с клавиатуры
	for (int i = 0; i < 5; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
	cout << "\nВыше среднего: ";

	for (int i = 0; i < 5; ++i) {
		x += arr[i];
	}
	x = x / 5;
	for (int i = 0; i < 5; ++i) {
		if (x < arr[i]) {
			a += 1;
		}
	}
	cout << a << "." << endl;
	return 0;
}