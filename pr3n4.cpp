#include <iostream>
using namespace std;

int main()
{
	float sr=0;
	int num; // размер массива
	cout << "ВВедите количество чисел: ";
	cin >> num; // получение от пользователя размера массива
	float min='\0'{}; float max='\0'{};
	float* p_darr = new float[num]; 
	for (int i = 0; i < num; i++) {
		cin >> p_darr[i];
		if (min == '\0') {
			min = p_darr[i];
			max = p_darr[i];
		}
		if (p_darr[i] > max) {
			max = p_darr[i];
		}
		if (p_darr[i] < min) {
			min = p_darr[i];
		}
	}
	for (int i = 0; i < num; i++) {
		sr += p_darr[i];
	}
	cout << endl << sr << endl;
	sr = sr/num;
	cout << "Максимальное значение: " << max << ". Минимальное значениие: " << min << ". Среднее значение: " << sr << endl;
	delete[] p_darr; // очистка памяти
	return 0;
}