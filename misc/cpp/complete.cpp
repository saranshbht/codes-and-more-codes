4#include<iostream>
using namespace std;

int main() {
	int n;
	bool flag = true;
	bool adjflag = true;
	bool **arr;
	int **adjl;

	cout << "Enter the number of vertices of the graph:" << endl;
	cin >> n;

	arr = new bool*[n];
	adjl = new int*[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new bool[n];
		arr[i] = {0};
	}

	for (int i = 0; i < n; i++) {
		adjl[i] = new int[n];
	}

	cout << "Enter the connections of the graph:" << endl;
	for (int i = 0; i < n; i++) {
		int d = 0;
		cout << "Enter degree of " << i << ": ";
		cin >> d;
		cout << i << "-> ";
		for (int j = 0; j < d; j++) {
			cin >> adjl[i][j];
			//cout<<adjl[i][j];
			//int a=adjl[i][j]-i;
			//a=(a>=0)?a:-a;
			arr[i][adjl[i][j]] = 1;
			//arr[i][a]=1;
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] != arr[j][i]) {
				cout << "The graph is not a valid graph" << endl;
				adjflag = false;
				break;
			}
			if (!adjflag) {
				break;
			}
		}
	}


	cout << endl << "Adjacency Matrix for the graph" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (i + 1); j++) {
			if (i != j && arr[i][j] != 1) {
				flag = false;
				break;
			}
		}
	}

	if (flag) {
		cout << endl << "The graph is a complete graph";
	} else {
		cout << endl << "The graph is not a complete graph";
	}

	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	for (int i = 0; i < n; i++) {
		delete[] adjl[i];
	}
	delete[] adjl;

	return 0;
}