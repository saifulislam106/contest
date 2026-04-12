#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >>x;

    vector <int> a(n);
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int operations =0;
    
    for(int i =0; i<x; i++){
        if(!binary_search(a.begin(), a.end(), i)){
            operations++;
        }
    }

    if(binary_search(a.begin(), a.end(), x)){
        operations++;
    };

    cout << operations << endl;

    return 0;
}