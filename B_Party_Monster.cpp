#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int open = 0, close = 0;

        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }

        if (open == close) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}