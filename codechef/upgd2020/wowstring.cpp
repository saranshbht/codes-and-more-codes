#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    string s1, s2;
    cin >> t;
    while (t--) {
        cin >> s1 >> s2;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        int a[26] = {0};
        int b[26] = {0};
        int size1 = s1.size();
        int size2 = s2.size();
        if (size1 != size2)
            cout << "NOT ANAGRAMS";
        else {
            for (int i = 0; i < size1; i++) {
                a[s1[i] - 'a']++;
                b[s2[i] - 'a']++;
            }
            int i;
            for (i = 0; i < 26; i++)
                if (a[i] != b[i])
                    break;
            if (i != 26)
                cout << "NOT ANAGRAMS";
            else
                cout << "ANAGRAMS";
        }
        cout << endl;
    }

    return 0;
}