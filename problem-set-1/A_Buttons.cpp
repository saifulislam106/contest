#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    cin >> a >> b;

  
    int twiceA = a + (a-1);
    int twiceB = b + (b-1);
    int AB = a + b;
int maxConin = max({twiceA, twiceB, AB});
    cout << maxConin;
    return 0;
}