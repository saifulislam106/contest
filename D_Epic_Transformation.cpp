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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int maxFreq = 1, curr = 1;

        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                curr++;
            } else {
                maxFreq = max(maxFreq, curr);
                curr = 1;
            }
        }
        maxFreq = max(maxFreq, curr);

        int result;
        if (maxFreq > n / 2) {
            result = maxFreq - (n - maxFreq);
        } else {
            result = n % 2;
        }

        cout << result << "\n";
    }

    return 0;
}