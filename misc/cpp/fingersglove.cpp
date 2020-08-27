#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		bool f = true, b = true;
		cin >> n;
		int fingers[n];
		int glove[n];
		for (int i = 0; i < n; i++) {
			cin >> fingers[i];
		}
		for (int i = 0; i < n; i++) {
			cin >> glove[i];
		}
		for (int i = 0; i < n; i++) {
			if (f && fingers[i] > glove[i]) {
				f = false;
			}
			if (b && fingers[n - 1 - i] > glove[i]) {
				b = false;
			}
			if (!(f || b)) {
				break;
			}
		}

		if (f && b) {
			cout << "both";
		} else if (f) {
			cout << "front";
		} else if (b) {
			cout << "back";
		} else {
			cout << "none";
		}
		cout << "\n";
	}

	return 0;
}