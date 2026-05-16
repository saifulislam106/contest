#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < m; i++){
            cin >> b[i];
        }
        int l = 0, r = 0;
        long long ans = 0;
        while(r < n && l < m){
            int current = a[r];
              int count1 = 0, count2 = 0;
           while(r< n && a[r] == current) count1++, r++;

           while(l<m && current > b[l]) l++;
           while(l<m && b[l] == current)  count2++  , l++;

           ans += (1LL *(count1 * count2));
          }
          cout << ans << " ";
    return 0;
}

// input 
// 8 7
// 1 1 3 3 3 5 8 8
// 1 3 3 4 5 5 5

// output
// 11