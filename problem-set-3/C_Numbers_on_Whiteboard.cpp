#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        // The minimum possible number is always 2 for n >= 2
        cout << "2\n";
        
        if (n == 2) {
            cout << "1 2\n";
            continue;
        }
        
        // Start with the two largest numbers
        cout << n << " " << n-2 << "\n";
        int curr = n;
        
        for (int i = n-1; i > 2; i--) {
            cout << curr << " " << i-2 << "\n";
            curr = (curr + i - 2 + 1) / 2; // ceil average
        }
        
        // Final step with 1 and the last number
        // For example, for n=4: after first two steps we have [1,3], then combine 1 and 3
        cout << "1 " << curr << "\n";
    }
    
    return 0;
}