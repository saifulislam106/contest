#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        map<int, int> mp;
        for(auto val: a) {
            mp[val]++;
        }

        int ans = 0;
        for(auto [val, freq]: mp) {
            int prev = val - 1;

            if(mp[prev]> mp[val]) {
                ans += 0;
            }else{
                int need = mp[val] - mp[prev];
                ans += need;
            }
        }

        cout << ans << endl;

    }

    return 0;
}

// input
// 10
// 6
// 2 2 3 4 3 1
// 5
// 11 8 7 10 9
// 6
// 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000
// 8
// 1 1 4 4 2 3 2 3
// 6
// 1 2 3 2 3 4
// 7
// 10 11 11 12 12 13 13
// 7
// 8 8 9 9 10 10 11
// 8
// 4 14 5 15 6 16 7 17
// 8
// 5 15 6 14 8 12 9 11
// 5
// 4 2 2 3 4
// output
// 2
// 1
// 6
// 2
// 2
// 2
// 2
// 2
// 4
// 3
