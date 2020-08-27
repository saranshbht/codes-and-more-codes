#include<iostream>
using namespace std;

int main() {
	int n;
	bool flag = true;
	bool **arr;

	cout << "Enter the number of vertices of the graph:" << endl;
	cin >> n;

	arr = new bool*[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new bool[n];
	}

	cout << endl << "Enter the Adjacency Matrix for the graph" << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	cout << endl << "Pairs of connected vertices:" << endl;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (i + 1); j++) {
			if (arr[i][j]) {
				cout << "(" << (char)(i + 97) << "," << (char)(j + 97) << ")" << endl;
				cout << "(" << (char)(j + 97) << "," << (char)(i + 97) << ")" << endl;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}

