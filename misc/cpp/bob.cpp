#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string top;
		string bottom;
		cin >> top >> bottom;
		int b = 0, o = 0;
		for (int i = 0; i < 3; i++) {
			if (top[i] == 'b' || bottom[i] == 'b') {
				b++;
			}
			if (top[i] == 'o' || bottom[i] == 'o') {
				o++;
			}
		}

		if (b == 2 && o == 1) {
			cout << "yes";
		} else {
			cout << "no";
		}
		cout << "\n";
	}
	return 0;
}