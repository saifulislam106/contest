#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        map<int, set<int>> mp;

        for(int i=0; i<n; i++){
            int x; 
            cin >> x;
            mp[x].insert(i);
        }

        for(int i=0; i<k; i++){
            int l, r;
            cin >> l >> r;
            if(mp.find(l) == mp.end()|| mp.find(r) == mp.end() ){
                cout << "NO\n";
            }else{
                int ml, mr;
                ml = *mp[l].begin();
                mr = *mp[r].rbegin();

                if(ml < mr){
                    cout << "YES\n";
                }else{
                    cout << "NO\n";
                }
            }
    }
}
    return 0;

}


// input
// 3

// 6 3
// 3 7 1 5 1 4
// 3 5
// 1 7
// 3 10

// 3 3
// 1 2 1
// 2 1
// 1 2
// 4 5

// 7 5
// 2 1 1 1 2 4 4
// 1 3
// 1 4
// 2 1
// 4 1
// 1 2

// Output 

// YES
// NO
// NO
// YES
// YES
// NO
// NO
// YES
// YES
// NO
// YES

