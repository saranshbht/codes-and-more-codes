#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
map<int, int> mp;
int f(int i, int k) {
    if (i == 5) {
        if (k >= 0)
            return 1;
        else
            return 0;
    }
    return f(i + 1, k) + mp[i] * f(i + 1, k - 1);
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    mp[0] = 2;
    mp[1] = 3;
    mp[2] = 1;
    mp[3] = 1;
    mp[4] = 1;
    cout << f(0, 5);


    return 0;
}