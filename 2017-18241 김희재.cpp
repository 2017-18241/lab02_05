#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main() {
	vector<int> NumberList;
	int num = 0;
	while (cin >> num){
	NumberList.push_back(num);
	}

	sort(NumberList.rbegin(), NumberList.rend());
	cout << "ordered array" << endl;
	for (auto i : NumberList) {
		cout << i << " ";
	}

	cout << endl;
}
