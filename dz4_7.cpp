#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <cmath>

using namespace std;

int main()
{
	float s1;
	float randomDigits_5[10]{}; // для чисел c плавающей точкой
	int m, i{}, c{};
	float s;
	int v;
	cout << "Введите s: ";
	cin >> s1;
	cout << "Введите вариант: ";
	cin >> v;
	if (v == 1) {
		m = 37; i = 3; c = 64;
	}
	else
	{
		m = 25173; i = 13849; c = 65537;
	}
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		randomDigits_5[i] = fmodf((m * s1 + i), c);
		s1 = randomDigits_5[i];
	}



	cout << endl << "Массив c числами: ";
	for (int i = 0; i < 10; i++)
	{
		cout << randomDigits_5[i] << "  ";
	}
	cout << endl;

	return 0;
}