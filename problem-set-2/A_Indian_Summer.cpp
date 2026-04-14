#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<pair<string, string>> st;

    while(n--) {
        string species, color;
        cin >> species >> color;
        st.insert({species, color});
    }

    cout << st.size() << endl;
}