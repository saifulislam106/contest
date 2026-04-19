#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    unordered_map<string, string> mp;

    for(int i =0; i<n; i++){
        string name, key;
        cin >> name >> key;
        mp[key] = name;
    }

    for(int i =0; i<m; i++){
        string command, extra_key;
        cin >> command >> extra_key;

        string clean_key = extra_key.substr(0, extra_key.size()-1);

        string value = mp[clean_key];
 
        cout << command << " " << extra_key << " #" << value << endl;
    }
    return 0;
}