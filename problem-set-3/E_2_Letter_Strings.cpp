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
        long long ans = 0;
        map<char, int> firstChar, secondChar;

        map<string, int> Str;

        while(n--){
            string s; cin >> s;

            char first = s[0], second = s[1];

            int currentPair = firstChar[first] + secondChar[second];
            int existingPair = 2 * Str[s];

            ans += currentPair - existingPair;
            firstChar[first]++;
            secondChar[second]++;
            Str[s]++;

        }

        cout << ans << endl;
    }
    
    return 0;
}

// input 
// 4
// 6
// ab
// cb
// db
// aa
// cc
// ef
// 7
// aa
// bb
// cc
// ac
// ca
// bb
// aa
// 4
// kk
// kk
// ab
// ab
// 5
// jf
// jf
// jk
// jk
// jk

// output 
// 5
// 6
// 0
// 6

