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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int l = -1, r = -1;
        
    
        for (int len = 4; len <= min(n, 5); len++) {
            for (int i = 0; i + len - 1 < n; i++) {
                int j = i + len - 1;
                
                int minVal = a[i], maxVal = a[i];
                for (int k = i+1; k <= j; k++) {
                    if (a[k] < minVal) minVal = a[k];
                    if (a[k] > maxVal) maxVal = a[k];
                }
                
                if (a[i] != minVal && a[i] != maxVal &&
                    a[j] != minVal && a[j] != maxVal) {
                    l = i + 1; 
                    r = j + 1;
                    break;
                }
            }
            if (l != -1) break;
        }
        
        if (l == -1) {
            cout << -1 << "\n";
        } else {
            cout << l << " " << r << "\n";
        }
    }
    
    return 0;
}