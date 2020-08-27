#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, limak;
	cin >> n;
	int arr[n - 1];
	cin >> limak;
	for (int i = 0; i < n - 1; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n - 1);
	if (limak == arr[n - 2]) {
		cout << 1;
	} else if (limak > arr[n - 2]) {
		cout << 0;
	} else {
		int origin = limak, i;
		while (1) {
			if (limak > arr[n - 2]) {
				break;
			}
			if (limak == arr[n - 2]) {
				limak++;
				break;
			} else {
				arr[n - 2]--;
				limak++;
				for (i = n - 3; i >= 0; i--) {
					if (arr[i] == arr[i + 1] + 1 && limak <= arr[n - 2]) {
						arr[i]--; limak++;
					} else {
						break;
					}
				}
				if (arr[i] == arr[i + 1] + 1) {
					limak++;
				}
			}
			//cout << limak << endl;
		}
		cout << limak - origin;
	}
	cout << endl;
	return 0;
}