#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	srand(time(NULL));
	ofstream file, file1;
	file.open("test.txt");
	file1.open("test1.txt");
	int t, n;
	ll k;
	t = rand() % 70 + 1;
	while (t--) {
		n = rand() % 10000 + 1;
		k = rand() % 1000000 + 1;
		int arr[n], brr[n];
		for (int i = 0; i < n; i++) {
			arr[i] = rand() % 10000000 + 1;
			brr[i] = arr[i];
		}
		int count = 0;
		while (count < k) {
			int x = count % n;
			arr[x] ^= arr[n - x - 1];
			count++;
		}
		k = k % (3 * n);
		count = 0;
		while (count < k) {
			int x = count % n;
			brr[x] ^= brr[n - x - 1];
			count++;
		}
		for (int i = 0; i < n; i++) {
			file << arr[i] << " ";
		}
		//cout << endl;
		for (int i = 0; i < n; i++) {
			file1 << brr[i] << " ";
		}
	}

	return 0;
}