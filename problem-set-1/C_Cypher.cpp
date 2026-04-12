#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;

            string s;
            cin >> s;

            int val = a[i];

            for (char c : s) {
                if (c == 'U') {
                    val = (val - 1 + 10) % 10;
                } else {
                    val = (val + 1) % 10;
                }
            }

            cout << val << " ";
        }

        cout << "\n";
    }

    return 0;
}