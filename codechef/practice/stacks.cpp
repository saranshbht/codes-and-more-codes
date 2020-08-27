#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v;
        cin >> a;
        v.push_back(a);
        for (int i = 1; i < n; i++) {
            cin >> a;
            int it = upper_bound(v.begin(), v.end(), a) - v.begin();
            if (it == v.size())
                v.push_back(a);
            else
                v[it] = a;
        }
        int k = v.size();
        cout << k << " ";
        for (int i = 0; i < k; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}