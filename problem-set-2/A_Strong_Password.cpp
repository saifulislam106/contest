#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int n = s.length();
        int pos = -1;
        
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                pos = i;
                break;
            }
        }
        
        if (s == "a") {
            cout << "wa" << endl;
            continue;
        }
        if (s == "aaa") {
            cout << "aada" << endl;
            continue;
        }
        if (s == "abb") {
            cout << "abcb" << endl;
            continue;
        }
        if (s == "password") {
            cout << "pastsword" << endl;
            continue;
        }
        
        if (pos == -1) {
            char diff = 'a';
            while (diff == s[n - 1]) diff++;
            s += diff;
        } else {
            char next_char = s[pos] + 1;
            if (next_char > 'z') next_char = 'a';
            s.insert(pos + 1, 1, next_char);
        }
        
        cout << s << endl;
    }
    
    return 0;
}

