#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long maxm = LONG_LONG_MIN;
    for (int i = 0; i < n; i++) {
        maxm = max(maxm, 1ll * arr[i] * (n - i));
    }
    cout << maxm << endl;

    return 0;
}