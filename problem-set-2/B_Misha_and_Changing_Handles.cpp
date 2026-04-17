#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    unordered_map<string, string> originalToCurrent;
    unordered_map<string, string> currentToOriginal;

    while (q--) {
        string oldHandle, newHandle;
        cin >> oldHandle >> newHandle;

        if (currentToOriginal.count(oldHandle)) {
            string original = currentToOriginal[oldHandle];

            originalToCurrent[original] = newHandle;

            currentToOriginal[newHandle] = original;
            currentToOriginal.erase(oldHandle);
        } else {
            originalToCurrent[oldHandle] = newHandle;
            currentToOriginal[newHandle] = oldHandle;
        }
    }

    vector<pair<string, string>> v;
    for (auto &it : originalToCurrent) {
        v.push_back(it);
    }

    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });

    cout << v.size() << endl;

    for (auto &p : v) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}