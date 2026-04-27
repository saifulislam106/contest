#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        bool found = false;

        for(int j = 0; j < v.size(); j++) {
            if(v[j] == s) {
                found = true;
                break;
            }
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";

        v.push_back(s);
    }
}