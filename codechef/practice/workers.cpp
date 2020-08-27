#include<iostream>
#include<climits>
using namespace std;

int main() {
	int n;
	int a = INT_MAX / 2, t = INT_MAX / 2, at = INT_MAX;
	cin >> n;
	int coins[n];
	int worker;
	for (int i = 0; i < n; i++)
		cin >> coins[i];

	for (int i = 0; i < n; i++) {
		cin >> worker;
		switch (worker) {
		case 1: if (coins[i] < t)
				t = coins[i];
			break;
		case 2: if (coins[i] < a)
				a = coins[i];
			break;
		case 3: if (coins[i] < at)
				at = coins[i];
		}
	}

	if ((a + t) > at)
		cout << at;
	else
		cout << (a + t);
	cout << "\n";

	return 0;
}