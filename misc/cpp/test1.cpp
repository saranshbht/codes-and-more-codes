#include<bits/stdc++.h>
using namespace std;
int f(int x, int *py, int **ppz) {
	**ppz += 1;
	*py += 2;
	x += 3;
	return x + *py + **ppz;
}

int main() {
	// int c = 4;
	// int *b = &c;
	// int **a = &b;
	// printf("%d\n", f(c, b, a));
	// cout << LONG_LONG_MIN;
	// cout << __builtin_popcount(8);
	// map<int, int> mp;
	// mp[1] = 2;
	// mp[2] = 4;
	// mp[4] = 5;
	// mp[5] = 1;
	// cout << mp.size();
	set<int> s;
	s.insert(3);
	s.insert(4);
	s.insert(3);
	s.erase(3); s.erase(4);
	// cout << s.size();
	vector<int> x(10), y(10);
	for (int i = 0;  i < 10; i++) {
		x[i] = i;
		y[i] = i * i;
	}
	swap(x, y);
	for (int i = 0; i < 10; i++)
		cout << x[i];
	// for (auto &i : s)
	//  cout << i;
	// vector<int> v;
	// // set<int> :: iterator it = s.begin();
	// set<int> :: iterator it1 = s.upper_bound(3);
	// cout << distance(s.begin(), s.upper_bound(3)) << endl;
}