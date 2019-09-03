// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//	string a;
//	cin >> a;
//	cout << a;
//}

//#include<iostream>
//#include<string>
//#include<Windows.h>
//using namespace std;
//int main()
//{
//
//	string str;
//	 
//	cout << str << endl;	
//	return 0;
//}



#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
int main()
{
	//SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	//SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	//setlocale(LC_CTYPE, "rus");
	int a;
	float f;
	cin >> a;
	f = a + 273.15;
	cout << "Кельвин: " << f << endl;
	f = (a * 9 / 5) + 32;
	cout << "Фаренейт: " << f << endl;
	f = (a * 9 / 5) + 491.67;
	cout << "Ранкин: " << f << endl;
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
