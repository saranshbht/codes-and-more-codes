#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    long long x, y, l, r;
    cin >> t;
    while(t--){
        cin >> x >> y >> l >> r;
        if(x == 0 || y == 0)
            cout << 0;
        else
            cout << (x | y);
        cout << endl;
    }

    return 0;
}