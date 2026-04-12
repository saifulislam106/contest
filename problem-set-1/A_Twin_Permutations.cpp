#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({a[i], i});
        }

        // sort by a[i]
        sort(v.begin(), v.end());

        vector<int> b(n);

        // assign increasing values
        for (int i = 0; i < n; i++) {
            b[v[i].second] = i + 1;
        }

        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
}