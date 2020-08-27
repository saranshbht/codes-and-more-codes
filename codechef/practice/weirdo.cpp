#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long

int isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, l;
    cin >> t;
    while (t--) {
        cin >> l;
        vector<string> arr(l);
        for (int i = 0; i < l; i++)
            cin >> arr[i];
        vector<string> alice, bob;
        for (int i = 0; i < l; i++) {
            int n = arr[i].size(), j;
            if (n == 2) {
                if (isVowel(arr[i][0]) + isVowel(arr[i][1]) < 1)
                    bob.push_back(arr[i]);
                else
                    alice.push_back(arr[i]);
            }
            else {
                for (j = 2; j < n; j++)
                    if (isVowel(arr[i][j - 2]) + isVowel(arr[i][j - 1]) + isVowel(arr[i][j]) < 2)
                        break;
                if (j != n)
                    bob.push_back(arr[i]);
                else
                    alice.push_back(arr[i]);
            }
        }

        int aliceSize = alice.size();
        int bobSize = bob.size();
        // cout << aliceSize << " " << bobSize << endl;
        unordered_map<char, ll> xca, fxca;
        for (int i = 0; i < aliceSize; i++) {
            int n = alice[i].size();
            unordered_set<char> s;
            for (int j = 0; j < n; j++) {
                fxca[alice[i][j]]++;
                s.insert(alice[i][j]);
            }
            for (auto &k : s)
                xca[k]++;
        }

        unordered_map<char, ll> xcb, fxcb;
        for (int i = 0; i < bobSize; i++) {
            int n = bob[i].size();
            unordered_set<char> s;
            for (int j = 0; j < n; j++) {
                fxcb[bob[i][j]]++;
                s.insert(bob[i][j]);
            }
            for (auto &k : s)
                xcb[k]++;
        }

        ll mulxca = 1, mulfxca = 1;
        for (auto &k : xca)
            mulxca *= k.second;
        for (auto &k : fxca)
            mulfxca *= k.second;
        mulfxca = (ll)(pow(mulfxca, aliceSize) + 0.5);
        ll mulxcb = 1, mulfxcb = 1;
        for (auto &k : xcb)
            mulxcb *= k.second;
        for (auto &k : fxcb)
            mulfxcb *= k.second;
        mulfxcb = (ll)(pow(mulfxcb, bobSize) + 0.5);
        ll p = mulxca * mulfxcb;
        ll q = mulxcb * mulfxca;
        if (q == 0)
            cout << "Infinity";
        else {
            double r = (double)p / q;
            if (r > 1e7)
                cout << "Infinity";
            else
                cout << fixed << setprecision(numeric_limits<double>::max_digits10) << r;
        }
        cout << endl;
    }

    return 0;
}