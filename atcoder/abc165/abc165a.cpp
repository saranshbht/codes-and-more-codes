#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, a, b;
    cin >> k >> a >> b;
    int i;
    for(i = a; i <= b; i++){
        if(i % k == 0)
            break;
    }
    if(i == b + 1)
        cout << "NG";
    else
        cout << "OK";
    cout << endl;

    return 0;
}