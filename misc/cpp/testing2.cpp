#include<bits/stdc++.h>
using namespace std;
// #define endl "\n"
int b[501][501];

bool fun1(int n, int u, bool seen[], int match[]) {
    for (int v = 0; v < n; v++) {
        if (b[u][v] && !seen[v]) {
            seen[v] = true;
            if (match[v] < 0 || fun1(n, match[v], seen, match)) {
                match[v] = u;
                return true;
            }
        }
    }
    return false;
}

void fun2(int n, int output[]) {
    int match[n];
    memset(match, -1, sizeof(match));
    int result = 0;
    for (int u = 0; u < n; u++) {
        bool seen[n];
        memset(seen, 0, sizeof(seen));
        if (fun1(n, u, seen, match))
            result++;
    }
    for (int i = 0; i < n; i++) {
        if (match[i] != -1)
            output[match[i]] = i;
    }
}

int main() {
    // ios_base :: sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[k][n], output[n] = {0};
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                b[i][j] = 0;
            }
        }
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (b[a[i][j] - 1][a[i][j + 1] - 1] == 0)
                    b[a[i][j] - 1][a[i][j + 1] - 1] = 1;
            }
        }
        // cout << "h";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (b[i][j] == 1 && b[j][i] == 1)
                    b[i][j] = b[j][i] = 0;
            }
        }

        fun2(n, output);
        int indeg[n] = {0};
        for (int i = 0; i < n; i++) {
            indeg[output[i]] = -1;
        }
        int count = 1;
        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0)
                count++;
        }
        cout << count << endl;
        for (int i = 0; i < n; i++) {
            cout << output[i] << " ";
        }
        cout << endl;
    }

    return 0;
}