#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    string a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int lena = a.size();
        int lenb = b.size();
        int i, j;
        for (i = 0; i < lena; i++) {
            for (j = 0; j < lenb; j++) {
                if (a[i] == b[j])
                    break;
            }
            if (j != lenb)
                break;
        }
        if (i != lena)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }

    return 0;
}