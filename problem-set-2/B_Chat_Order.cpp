#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    list<string> chatList;
    unordered_map<string, list<string>::iterator> pos;

    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;

        if (pos.find(name) != pos.end()) {
            chatList.erase(pos[name]);
        }

        chatList.push_front(name);

        pos[name] = chatList.begin();
    }

    for (auto &name : chatList) {
        cout << name << "\n";
    }

    return 0;
}