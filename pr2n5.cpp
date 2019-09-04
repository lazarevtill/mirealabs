#include<iostream>
#include<string>
#include <cmath>
using namespace std;


int main()
{
	int a;
	int b;
	bool r;
	int arr[2][3];
	for (int i = 0; i < 2; ++i) {
		cout << "Введите количество медалей у команды номер " << i+1 <<" (золото, серебро, броза): " << endl;
		for (int j = 0; j < 3; ++j) {
			cin >> arr[i][j];
		}
	}

	a = arr[0][0] * 7 + arr[0][1] * 6 + arr[0][2] * 5;
	b = arr[1][0] * 7 + arr[1][1] * 6 + arr[1][2] * 5;
	if (a > b) {
		r = 0;
		cout << "У команды номер " << r + 1 << ": " << a << " баллов" << endl;
		r = 1;
		cout << "У команды номер " << r + 1 << ": " << b << " баллов" << endl;
	}
	else
	{
		r = 1;
		cout << "У команды номер " << r + 1 << ": " << b << " баллов" << endl;
		r = 0;
		cout << "У команды номер " << r + 1 << ": " << a << " баллов" << endl;
	}
	return 0;
}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	double b, c;
//	cout << "Введите b: ";
//	cin >> b;
//	cout << "Введите c: ";
//	cin >> c;
//	if (b == 0 && c == 0) cout << "Уравнение имеет решение при любых значениях переменной x";
//	else if (b != 0 && c != 0) cout << "Уравнение имеет решение при x = " << -(c / b);
//	else if (b == 0 && c != 0) cout << "Уравнение не иммет решений";
//	else if (b = !0 && c == 0) cout << "Уравнение имеет решение при x = 0";
//	return 0;
//}