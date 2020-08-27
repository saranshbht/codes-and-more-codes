#include<iostream>
using namespace std;

int main() {
	int n, h;
	cin >> n >> h;
	long arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int i = 0, box = 0, q;
	while (true) {
		cin >> q;
		if (!q) {
			break;
		}
		if (q == 1 && i != 0) {
			i--;
		} else if (q == 2 && i != n - 1) {
			i++;
		} else if (q == 3 && arr[i] != 0 && box == 0) {
			arr[i]--;
			box++;
		} else if (q == 4 && arr[i] != h && box != 0) {
			arr[i]++;
			box--;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
