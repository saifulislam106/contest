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

        vector<string> a(n), b(n), c(n);
        unordered_map<string, int> freq;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            freq[b[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cin >> c[i];
            freq[c[i]]++;
        }

        int count1 = 0, count2 = 0, count3 = 0;

        for(auto &x: a){
            if(freq[x]==1){
                count1 += 3;
            }else if(freq[x]==2){
                count1 += 1;
            }
        }
        for(auto &x: b){
            if(freq[x]==1){
                count2 += 3;
            }else if(freq[x]==2){
                count2 += 1;
            }
        }
        for(auto &x: c){
            if(freq[x]==1){
                count3 += 3;
            }else if(freq[x]==2){
                count3 += 1;
            }
        }
        cout << count1 << " " << count2 << " " << count3 << endl;
    }
   
    return 0;
}