#include <iostream>
#include <cstdlib>
#include <ctime> 
#include <cmath>


using namespace std;

int main()
{
	float randomDigits_5[10]{}; // для чисел c плавающей точкой
	int m, i{}, c{};
	float s;
	m = 37; i = 3; c = 64;
	cin >> s;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		randomDigits_5[i] = fmodf((m * s + i), c);
	}


	cout << endl << "Массив c числами: ";
	for (int i = 0; i < 10; i++)
	{
		cout << randomDigits_5[i] << "  ";
	}
	cout << endl;

	return 0;
}