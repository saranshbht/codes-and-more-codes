#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n1, n2, n3, a;
    map<int, int> mp;
    set<int> s1, s2, s3;
    cin >> n1 >> n2 >> n3;
    for (int i = 0; i < n1; i++) {
        cin >> a;
        s1.insert(a);
    }
    for (int i = 0; i < n2; i++) {
        cin >> a;
        s2.insert(a);
    }
    for (int i = 0; i < n3; i++) {
        cin >> a;
        s3.insert(a);
    }
    for (auto &i : s1)
        mp[i]++;
    for (auto &i : s2)
        mp[i]++;
    for (auto &i : s3)
        mp[i]++;
    vector<int> v;
    for (auto &i : mp) {
        if (i.second > 1)
            v.push_back(i.first);
    }
    int k = v.size();
    cout << k << endl;
    for (int i = 0; i < k; i++)
        cout << v[i] << endl;
    return 0;
}