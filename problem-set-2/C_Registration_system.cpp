#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_map<string, int> mp;

    while (n--) {
        string name;
        cin >> name;

        if (mp.find(name) == mp.end()) {
            cout << "OK\n";
            mp[name] = 1;
        } 
        else {
            int k = mp[name];
            string newName = name + to_string(k);

            cout << newName << "\n";

            mp[name]++;
            mp[newName] = 1;
        }
    }

    return 0;
}