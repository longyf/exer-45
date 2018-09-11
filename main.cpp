#include <iostream>
#include "printMinNumber.h"
#include <string>
#include <vector>
using namespace std;
void print(const string &s1) {
	for (auto iter = s1.begin(); iter != s1.end(); iter++) {
		cout<<*iter;
	}
	cout<<endl;
}

void test1() {
	vector<int> numbers = {3, 2, 1};
	string s1 = printMinNumber(numbers);
	print(s1);
}

void test2() {
	vector<int> numbers = {3, 32, 321};
	string s1 = printMinNumber(numbers);
	print(s1);
}

int main() {
	test1();
	test2();
	return 0;
}
