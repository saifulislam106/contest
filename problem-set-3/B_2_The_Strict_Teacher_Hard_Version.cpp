#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;
        
        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(b.begin(), b.end());
        
        while (q--) {
            int a;
            cin >> a;
            
            int pos = lower_bound(b.begin(), b.end(), a) - b.begin();
            
            if (pos == 0) {
                // David to left of all teachers
                cout << b[0] - 1 << '\n';
            } else if (pos == m) {
                // David to right of all teachers
                cout << n - b[m-1] << '\n';
            } else {
                // Trapped between two teachers
                int left = b[pos-1];
                int right = b[pos];
                int mid = (left + right) / 2;
                if (a <= mid) {
                    cout << max(a - left, (right - left + 1) / 2) << '\n';
                } else {
                    cout << max(right - a, (right - left + 1) / 2) << '\n';
                }
            }
        }
    }
    
    return 0;
}