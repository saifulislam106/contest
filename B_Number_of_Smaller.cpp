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
            int count = 0;
          while(r < m){
             if(l<n && a[l] < b[r]){
               count++;
               l++;
           }else{
               cout << count << " ";
               r++;
           }
        }
    return 0;
}
// input
// 6 7
// 1 6 9 13 18 18
// 2 3 8 13 15 21 25
// output
// 1 1 2 3 4 6 6
