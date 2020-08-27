#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string dna;
	cin >> dna;
	int n = dna.size();
	char c = dna[0];
	int maxm = 0;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (dna[i] == c) {
			count++;
		} else {
			if (count > maxm) {
				maxm = count;
			}
			c = dna[i];
			count = 1;
		}
	}
	maxm = max(maxm, count);
	cout << maxm << endl;

	return 0;
}