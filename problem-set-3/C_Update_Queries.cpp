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
        }

        string c;
        cin >> c;

        // Keep only unique indices
        sort(ind.begin(), ind.end());
        ind.erase(unique(ind.begin(), ind.end()), ind.end());

        // Sort characters
        sort(c.begin(), c.end());

        // Assign smallest chars to smallest indices
        for (int i = 0; i < ind.size(); i++) {
            s[ind[i] - 1] = c[i];
        }

        cout << s << '\n';
    }

    return 0;
}