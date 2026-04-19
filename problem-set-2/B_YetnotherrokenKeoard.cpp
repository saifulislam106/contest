#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<char> result;
        vector<int> lower, upper;

        for(char c: s){
           if(c =='b'){
            if(!lower.empty()){
                int idx = lower.back();
                lower.pop_back();
                result[idx] = '#';
            }
           }else if(c == 'B'){
            if(!upper.empty()){
                int idx = upper.back();
                upper.pop_back();
                result[idx] = '#';
            }
           }else{
             result.push_back(c);
             int idx = result.size() - 1;
             if(islower(c)){
               lower.push_back(idx);
             }else{
               upper.push_back(idx);
             }
           }
        }
        
        for( char c: result){
            if(c != '#'){
                cout << c;    
            }
        }
        cout << endl;
    }

    return 0;
}