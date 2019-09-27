#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{ 
	int s{}, n;
	double p;
	cout << "vvedite Summy, prozent,goda: " << endl;
	cin >> s >> p >> n ;
	double m = (s * (p / 100));
		m = m * (pow((1 + p / 100), n));
		m = m / (12 * (pow((1 + p / 100), n) - 1));
	cout << endl << m;



	
	return 0;
}