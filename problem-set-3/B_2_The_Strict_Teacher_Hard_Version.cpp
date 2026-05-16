#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        vector<int> b(m);

        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        while (q--) {
            int a;
            cin >> a;

            auto it = lower_bound(b.begin(), b.end(), a);

            if (it == b.begin()) {
                cout << b[0] - 1 << '\n';
            }

            // David is right of all teachers
            else if (it == b.end()) {
                cout << n - b[m - 1] << '\n';
            }

            else {
                int r = *it;
                int l = *(--it);

                cout << (r - l) / 2 << '\n';
            }
        }
    }

    return 0;
}

//input 
// 2
// 8 1 1
// 6
// 3
// 10 3 3
// 1 4 8
// 2 3 10

//output
// 5
// 1
// 1
// 2

