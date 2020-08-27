#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

ll merge(int *arr, int l, int mid, int r) {
	int i = l, j = mid, k = 0;
	ll inversions = 0;
	int brr[r - l + 1];
	while ((i <= mid - 1) && (j <= r)) {
		if (arr[i] <= arr[j]) {
			brr[k++] = arr[i++];
		} else {
			brr[k++] = arr[j++];
			inversions += mid - i;
		}
	}

	while (i <= mid - 1) {
		brr[k++] = arr[i++];
	}
	while (j <= r) {
		brr[k++] = arr[j++];
	}
	for (int i = 0; i <= r - l; i++) {
		arr[l + i] = brr[i];
	}
	return inversions;
}

ll mergeSort(int *arr, int l, int r) {
	if (r > l) {
		int mid = (l + r) / 2;
		ll inversions = mergeSort(arr, l, mid);
		inversions += mergeSort(arr, mid + 1, r);
		inversions += merge(arr, l, mid + 1, r);
		return inversions;
	}
	return 0;
}



int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, q, k;
	cin >> t;
	while (t--) {
		cin >> n >> q;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		while (q--) {
			cin >> k;
			int brr[n];
			for (int i = 0; i < n; i++) {
				brr[i] = arr[i] ^ k;
			}
			cout << mergeSort(brr, 0, n - 1) << endl;
		}
	}

	return 0;
}