#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> h(n);
        long long sum = 0;
        int maxH = 0;

        for (int i = 0; i < n; ++i) {
            cin >> h[i];
            sum += h[i];
            maxH = max(maxH, h[i]);
        }

        // Minimum number of spells = max(maxH, ceil(sum / 2))
        long long minSpells = max((long long)maxH, (sum + 1) / 2);
        cout << minSpells << "\n";
    }
    return 0;
}