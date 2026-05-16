#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> ind(m);

        for (int i = 0; i < m; i++) {
            cin >> ind[i];
            ind[i]--; 
        }

        string c;
        cin >> c;

        sort(ind.begin(), ind.end());
        ind.erase(unique(ind.begin(), ind.end()), ind.end());

        sort(c.begin(), c.end());

        for (int i = 0; i < ind.size(); i++) {
            s[ind[i]] = c[i];
        }

        cout << s << '\n';
    }

    return 0;
}

// input 
// 4
// 1 2
// a
// 1 1
// cb
// 4 4
// meow
// 1 2 1 4
// zcwz
// 7 4
// abacaba
// 1 3 5 7
// damn
// 7 10
// traktor
// 7 6 5 4 3 2 1 6 4 2
// codeforces

//output

// b
// cwoz
// abdcmbn
// ccdeefo
