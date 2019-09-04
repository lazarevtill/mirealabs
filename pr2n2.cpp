#include<iostream>
#include<string>
#include <cmath>
using namespace std;

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int main()
{
	int arr[10];

	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
	}
	qsort(arr, 10, sizeof(int), comp1);
	for (int i = 0; i < 10; ++i) {
		cout << arr[i]<<" ";
	}
	return 0;
}