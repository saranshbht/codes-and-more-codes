#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MAX 1000000
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    vector<bool> prime(MAX + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
        }
    }


    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n < 4) {
            cout << 1 << endl;
            cout << n << " ";
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
            continue;
        }
        cout << n / 2 << endl;
        int i;
        for (i = 4; i < n; i += 2) {
            if (!prime[i + 1]) {
                cout << 2 << " " << i << " " << i + 1;
            }
            else {
                cout << 1 << " " << i;
            }
            cout << endl;
        }
        if (i == n)
            cout << 1 << " " << i << endl;
        int count = 0;
        for (int i = 0; i <= n; i++) {
            if (prime[i])
                count++;
        }
        cout << count + 1 << " " << 1 << " ";
        for (int i = 2; i <= n; i++) {
            if (prime[i])
                cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}