#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr[n], brr[n], crr[m];
		for (int i = 0; i < n; i++)
			cin >> arr[i];
		for (int i = 0; i < n; i++)
			cin >> brr[i];
		for (int i = 0; i < m; i++)
			cin >> crr[i];
		int k = 0, rad = 0, gee = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] > brr[i]) {
				rad++;
				if (k < m) {
					if (crr[k] > crr[k + 1])
						rad++;
					else
						gee++;
					k += 2;
				}
			} else {
				gee++;
				if (k < m) {
					if (crr[k] > crr[k + 1])
						gee++;
					else
						rad++;
					k += 2;
				}
			}
		}
		if (rad > gee)
			cout << "Radhesh wins";
		else if (gee > rad)
			cout << "Geethakoomaree wins";
		else
			cout << "Tie";
		cout << endl;
	}

	return 0;
}