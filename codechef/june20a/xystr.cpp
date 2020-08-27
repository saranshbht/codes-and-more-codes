#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int n = s.size();
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                count++;
                i++;
            }
        }
        cout << count << endl;
    }

    return 0;
}