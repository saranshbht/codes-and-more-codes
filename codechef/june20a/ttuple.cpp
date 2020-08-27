#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, p, q, r, a, b, c;
    cin >> t;
    while (t--) {
        cin >> p >> q >> r >> a >> b >> c;
        int dap = a - p;
        int dbq = b - q;
        int dcr = c - r;
        int count = !!dap + !!dbq + !!dcr;
        if (count <= 1) {
            cout << count;
        }
        else if (count == 2) {
            if (!dbq) {
                swap(b, a);
                swap(p, q);
                swap(dbq, dap);
            }
            else if (!dcr) {
                swap(c, a);
                swap(r, p);
                swap(dcr, dap);
            }
            if (dbq == dcr) {
                cout << 1;
            }
            else if (q && r) {
                int qbq = b / q;
                int qcr = c / r;
                int rbq = b % q;
                int rcr = c % r;
                if (!rbq && !rcr && qbq == qcr) {
                    cout << 1;
                }
                else {
                    cout << 2;
                }
            }
            else {
                cout << 2;
            }
        }
        else {
            if (dap == dbq == dcr) {
                cout << 1;
            }
            else if (p && q && r) {
                int qap = a / p;
                int qbq = b / q;
                int qcr = c / r;
                int rap = a % p;
                int rbq = b % q;
                int rcr = c % r;
                if (!rap && !rbq && !rcr && qap == qbq == qcr) {
                    cout << 1;
                }
            }
        }
        cout << endl;
    }

    return 0;
}