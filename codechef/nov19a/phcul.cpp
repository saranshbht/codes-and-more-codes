#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t, n, m, k, x, y, a, b;
	cin >> t;
	while (t--) {
		cin >> x >> y >> n >> m >> k;
		vector<pair<int, int> > nset(n);
		vector<pair<int, int> > mset(m);
		vector<pair<int, int> > kset(k);
		for (int i = 0; i < n; i++) {
			cin >> nset[i].first >> nset[i].second;
		}
		for (int i = 0; i < m; i++) {
			cin >> mset[i].first >> mset[i].second;
		}
		for (int i = 0; i < k; i++) {
			cin >> kset[i].first >> kset[i].second;
		}

		// long double mindist1 = DBL_MAX;
		// for(int i = 0; i < n; i++){
		//     for(int j = 0; j < m; j++){
		//         for(int l = 0; l < k; l++){
		//             ll a = x - nset[i].first;
		//             ll b = y - nset[i].second;
		//             ll c = nset[i].first - mset[j].first;
		//             ll d = nset[i].second - mset[j].second;
		//             ll e = mset[j].first - kset[l].first;
		//             ll f = mset[j].second - kset[l].second;
		//             long double dist = sqrtl(a * a + b * b);
		//             dist += sqrtl(c * c + d * d);
		//             dist += sqrtl(e * e + f * f);
		//             if(dist < mindist1){
		//                 // cout << a * a + b * b << " " << c * c + d * d << " " << e * e + f * f << endl;
		//                 mindist1 = dist;
		//             }
		//         }
		//     }
		// }
		// cout << mindist1 << endl;

		long double arr[m], mindist1, mindist2, dist;
		for (int i = 0; i < m; i++) {
			mindist1 = DBL_MAX;
			for (int j = 0; j < n; j++) {
				ll a = x - nset[j].first;
				ll b = y - nset[j].second;
				ll c = mset[i].first - nset[j].first;
				ll d = mset[i].second - nset[j].second;
				dist = sqrtl(a * a + b * b);
				dist += sqrtl(c * c + d * d);
				if (dist < mindist1) {
					mindist1 = dist;
				}
			}
			arr[i] = mindist1;
		}
		for (int i = 0; i < m; i++) {
			mindist1 = DBL_MAX;
			for (int j = 0; j < k; j++) {
				ll a = mset[i].first - kset[j].first;
				ll b = mset[i].second - kset[j].second;
				// ll c = mset[i].first - nset[j].first;
				// ll d = mset[i].second - nset[j].second;
				dist = sqrtl(a * a + b * b);
				// dist += sqrtl(c * c + d * d);
				if (dist < mindist1) {
					mindist1 = dist;
				}
			}
			arr[i] += mindist1;
		}
		mindist1 = LDBL_MAX;
		for (int i = 0; i < m; i++) {
			mindist1 = min(mindist1, arr[i]);
		}

		long double brr[n];
		for (int i = 0; i < n; i++) {
			mindist2 = DBL_MAX;
			for (int j = 0; j < m; j++) {
				ll a = x - mset[j].first;
				ll b = y - mset[j].second;
				ll c = nset[i].first - mset[j].first;
				ll d = nset[i].second - mset[j].second;
				dist = sqrtl(a * a + b * b);
				dist += sqrtl(c * c + d * d);
				if (dist < mindist2) {
					mindist2 = dist;
				}
			}
			brr[i] = mindist2;
		}
		for (int i = 0; i < n; i++) {
			mindist2 = DBL_MAX;
			for (int j = 0; j < k; j++) {
				ll a = nset[i].first - kset[j].first;
				ll b = nset[i].second - kset[j].second;
				// ll c = mset[i].first - nset[j].first;
				// ll d = mset[i].second - nset[j].second;
				dist = sqrtl(a * a + b * b);
				// dist += sqrtl(c * c + d * d);
				if (dist < mindist2) {
					mindist2 = dist;
				}
			}
			brr[i] += mindist2;
		}
		mindist2 = LDBL_MAX;
		for (int i = 0; i < n; i++) {
			mindist2 = min(mindist2, brr[i]);
		}

		// cout << mindist2 << endl;
		cout << fixed << setprecision(numeric_limits<double>::max_digits10) << min(mindist1, mindist2) << endl;
	}

	return 0;
}