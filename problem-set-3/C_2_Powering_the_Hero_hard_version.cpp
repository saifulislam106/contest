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

        priority_queue<long long> pq;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;

            if (x == 0) {
                // hero appears
                if (!pq.empty()) {
                    ans += pq.top();
                    pq.pop();
                }
            } else {
                // bonus card
                pq.push(x);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}

// input
// 5
// 5
// 3 3 3 0 0
// 6
// 0 3 3 0 0 3
// 7
// 1 2 3 0 4 5 0
// 7
// 1 2 5 0 4 3 0
// 5
// 3 1 0 0 4

// output
// 6
// 9
// 8
// 9
// 4