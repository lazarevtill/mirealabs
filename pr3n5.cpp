//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//using namespace std;
//
//int Date(int D, int M, int Y)
//{
//	int a, y, m, R;
//	a = (14 - M) / 12;
//	y = Y - a;
//	m = M + 12 * a - 2;
//	R = 7000 + (D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
//	return R % 7;
//}
//
//int main()
//{
//	int d;
//	int m;
//	int y;
//	cout << "Введите число (день, месяц, год)" << endl;
//	cin >> d >> m >> y;
//	d = Date(d, m, y);
//	switch (d)
//	{
//	case 0: cout << "Вс" << endl; break;
//	case 1: cout << "Пн" << endl; break;
//	case 2: cout << "Вт" << endl; break;
//	case 3: cout << "Ср" << endl; break;
//	case 4: cout << "Чт" << endl; break;
//	case 5: cout << "Пт" << endl; break;
//	case 6: cout << "Сб" << endl; break;
//	}
//	return 0;
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//
//// check day
//bool check_date(int day, int month) {
//	if ((month == 2) && (day > 0) && (day < 30)) {
//		return true;
//	}
//	if ((
//		(month == 1) ||
//		(month == 3) ||
//		(month == 5) ||
//		(month == 7) ||
//		(month == 8) ||
//		(month == 10) ||
//		(month == 12)
//		) && ((day > 0) && (day < 32)))
//	{
//		return true;
//	}
//	if ((
//		(month == 4) ||
//		(month == 6) ||
//		(month == 9) ||
//		(month == 11)
//		) && ((day > 0) && (day < 31)))
//	{
//		return true;
//	}
//	return false;
//}
//
//
//// check month
//bool check_month(int month) {
//	if ((month > 0) && (month < 13)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//// check year
//bool check_year(int year) {
//
//	if ((year > 999) && (year < 10000)) {
//		return true;
//	}
//	else {
//
//		return false;
//	}
//
//}
//// is it leap year
//bool check_leap_year(int year) {
//	if (((year % 4) == 0) && ((year % 100) != 0)) {
//		return true;
//	}
//	else if ((year % 400) == 0) {
//		return true;
//	}
//	else {
//		return false;
//	}
//
//
//}
//
//// get exact day from date
////
//// http://en.wikipedia.org/wiki/Julian_day#Calculation
////
//const char* get_day(int day, int month, int year) {
//	int JMD;
//	JMD = (day + ((153 * (month + 12 * ((14 - month) / 12) - 3) + 2) / 5) +
//		(365 * (year + 4800 - ((14 - month) / 12))) +
//		((year + 4800 - ((14 - month) / 12)) / 4) -
//		((year + 4800 - ((14 - month) / 12)) / 100) +
//		((year + 4800 - ((14 - month) / 12)) / 400) - 32045) % 7;
//	//cout << JMD;
//	const char* weekday[] = { "Пн",
//	  "Вт",
//	  "Ср",
//	  "Чт",
//	  "Пт",
//	  "Сб",
//	  "Вс" };
//	return weekday[JMD];
//}
//
//
//// main trigger function
//int main() {
//	// instalise variable
//	int year, month, date, x, y;
//
//
//	
//	// Take Inputs
//	cout << "\n[+] Введите год [ГГГГ] : ";
//	cin >> year;
//	cout << "\n[+] Проверка года [ГГГГ] : ";
//
//	// verify year
//	if (check_year(year)) {
//		cout << "\n\t[-] Год подтвержден";
//	}
//	else {
//		cout << "\n\t [-] Введен неверный год\n";
//		exit(0);
//	}
//
//
//	cout << "\n[+] Введите месяц  [MM] : ";
//	cin >> month;
//
//	// verify month
//	if (check_month(month)) {
//		cout << "\n\t[-] Месяц подтвержден";
//	}
//	else {
//		cout << "\n\t [-] Введен неверный месяц";
//		exit(0);
//	}
//	cout << "\n[+] Введите день   [ДД] : ";
//	cin >> date;
//
//
//	// verify date
//	if (check_date(date, month)) {
//		cout << "\n\t[-] День подвержден\n\n";
//	}
//	else {
//		cout << "\n\t [-] Введен неверный месяц";
//		exit(0);
//	}
//	cout << "[+] Дата: " << date << ", Месяц: " << month << ", Год: " << year << " [ ";
//	if (check_leap_year(year)) {
//		cout << "Високосный год" << " ]";
//	}
//	else {
//		cout << "Не високосный год" << " ]";
//	}
//	cout << "\n\t[-] День недели: ";
//	cout << get_day(date, month, year);
//	cout << "\n\n";
//}


#include <iostream>
#include <string>

using namespace std;

int Date(int D, int M, int Y)
{
	int a, y, m, R;
	a = (14 - M) / 12;
	y = Y - a;
	m = M + 12 * a - 2;
	R = 7000 + (D + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
	return R % 7;
}

int main()
{
	int D, M, Y;
	char C;
	string S[7] = { "Вс", "Пн", "Вт", "Ср", "Чт", "Пт", "Сб" };
	cin >> D >> C >> M >> C >> Y;
	cout << S[Date(D, M, Y)] << endl;

	system("pause");
	return 0;
}