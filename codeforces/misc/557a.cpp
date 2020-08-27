#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, min1, min2, min3, max1, max2, max3;
	cin >> n >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;
	int first = min1, second = min2, third = min3;
	int sum = first + second + third;
	int rem = n - sum;
	if (rem > 0) {
		if (rem > max1 - min1) {
			first = max1;
			rem -= max1 - min1;
			if (rem > max2 - min2) {
				second = max2;
				rem -= max2 - min2;
				if (rem > max3 - min3) {
					third = max3;
					rem -= max3 - min3;
				} else {
					third += rem;
				}
			} else {
				second += rem;
			}
		} else {
			first += rem;
		}
	}
	cout << first << " " << second << " " << third << endl;

	return 0;
}