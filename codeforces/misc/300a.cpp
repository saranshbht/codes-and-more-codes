#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int> positive;
	vector<int> negative;
	vector<int> zero;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			negative.push_back(arr[i]);
		} else if (arr[i] > 0) {
			positive.push_back(arr[i]);
		} else {
			zero.push_back(arr[i]);
		}
	}

	if (positive.size() == 0) {
		positive.push_back(negative[negative.size() - 1]);
		positive.push_back(negative[negative.size() - 2]);
		negative.pop_back();
		negative.pop_back();
	}
	if ((negative.size() & 1) == 0) {
		zero.push_back(negative[negative.size() - 1]);
		negative.pop_back();
	}


	cout << negative.size() << " ";
	for (int &i : negative) {
		cout << i << " ";
	}
	cout << endl << positive.size() << " ";
	for (int &i : positive) {
		cout << i << " ";
	}
	cout << endl << zero.size() << " ";
	for (int &i : zero) {
		cout << i << " ";
	}
	cout << endl;
	return 0;
}