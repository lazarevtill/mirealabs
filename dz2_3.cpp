#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	double z{}, y{}, x{}, b;
	cout << "vvedite chisla " << endl;
	cin >> y >> x >> b;
	z = (log(b - y)) * (sqrt(b - x));
	cout << endl << z;

	return 0;
}