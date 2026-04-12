#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,t;
    cin >> s >>t;

    int count = 0;

    for(int a =0 ; a<=s; a++){
        for(int b =0 ; b<=s; b++){
            if(a+b>s) continue;

            for(int c =0 ; c<=s-a-b; c++){
                if(a*b*c>t) break;
                count++;
            }
        }
    }
    cout << count;

    return 0;
}