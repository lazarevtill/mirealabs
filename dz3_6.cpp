#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <array>
#include <iterator> 
using namespace std;

int main() {
	string word;
	getline(cin, word);
	vector<int> ch;
	for (char s : word)
		ch.push_back(int(s));
	sort(ch.begin(), ch.end());

	for (int i : ch)
		cout << char(i);

}
