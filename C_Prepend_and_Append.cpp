#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n ;
        string s; cin >> s;

        int l = 0 , r =n-1 , ans = n;
        while(l<=r){
            if(s[l]== s[r]){
                break;
            }else{
                ans -= 2;
                l++;
                r--;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// input
// 9
// 3
// 100
// 4
// 0111
// 5
// 10101
// 6
// 101010
// 7
// 1010110
// 1
// 1
// 2
// 10
// 2
// 11
// 10
// 1011011010
// output1
// 2
// 5
// 0
// 3
// 1
// 0
// 2
// 4
