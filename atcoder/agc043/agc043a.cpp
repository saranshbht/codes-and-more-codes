#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int dfs(vector<vector<char> > &arr, int i, int j, vector<vector<int> > &brr) {
	int h = arr.size();
	int w = arr[0].size();
	int val = 0;
	if (brr[i][j] != -1) {
		return brr[i][j];
	}
	if (arr[i][j] == '#') {
		val++;
	}
	if (i < h - 1 && j < w - 1) {
		brr[i][j] = val + min(dfs(arr, i + 1, j, brr), dfs(arr, i, j + 1, brr));
	} else if (i < h - 1) {
		brr[i][j] = val + dfs(arr, i + 1, j, brr);
	} else if (j < w - 1) {
		brr[i][j] = val + dfs(arr, i, j + 1, brr);
	} else {
		brr[i][j] = val;
	}
	return brr[i][j];
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int h, w;
	cin >> h >> w;
	vector<vector<char> > arr(h, vector<char> (w));
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) {
			cin >> arr[i][j];
		}
	vector<vector<int> > brr(h, vector<int> (w, -1));
	cout << dfs(arr, 0, 0, brr) << endl;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cout << brr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}