#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, W;
        cin >> n >> W;

        vector <int> a(n);
        for(int i =0 ; i<n; ++i){
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        int ans = 0;
        multiset <int> remaining;

        for(auto value: a){
            auto it = remaining.lower_bound(value);

            if(it == remaining.end()){
                ans++;

                int newRemaining = W - value;
                remaining.insert(newRemaining);
            }else{
                int newRemaining = *it - value;
                remaining.erase(it);
                remaining.insert(newRemaining);
            }

        }

        cout << ans << "\n";

    }
    
    return 0;
}

// input
// 2
// 5 16
// 1 2 8 4 8
// 6 10
// 2 8 8 2 2 8
// output
// 2
// 3
