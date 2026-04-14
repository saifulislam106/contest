#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left =-1;
        int right = -1;

        for(int i =0; i<n; i++){
            if(s[i] =='B'){
                left = i;
                break;
            }
        }

          for(int i =n-1; i>=0; i--){
            if(s[i] =='B'){
                right = i;
                break;
            }
        }

        int count = right - left + 1;
        cout << count << endl;
    }

    return 0;
}