#ifndef PRINT_MIN_NUMBER_H
#define PRINT_MIN_NUMBER_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;
bool isLarger(string &s1, string &s2) {
	return (s1 + s2) > (s2 + s1) ? true : false;
}

string printMinNumber(vector<int> &numbers) {
	if (numbers.empty()) {
		string result;
		return result;
	}

	//convert int to string
	vector<string> v1;
	for (auto iter = numbers.begin(); iter != numbers.end(); iter++) {
		v1.push_back(to_string(*iter));
	}

	//sort the vector<string>.
	int index = v1.size() - 1;
	while (index != 0) {
		for (int i = 0; i != index; ++i) {
			if (isLarger(v1[i], v1[i + 1])) swap(v1[i], v1[i + 1]);
		}
		index--;
	}

	//return the result
	string result;
	for (auto iter = v1.begin(); iter != v1.end(); ++iter) {
		result += *iter;
	}
	return result;
}
#endif
