#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<bool> seen(26, false);

    // rang based for loop
    for(char c : s){
        seen[c - 'a']= true;
    }

    for(int i =0; i<26; i++){
        if(!seen[i]){
            cout << char(i + 'a');
            return 0;
        }

    }
    cout << "None";
    return 0;
}