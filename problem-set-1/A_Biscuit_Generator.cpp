#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, t; // here a is rep time, b is prod of per a, t is within time
    cin >>a >>b >>t;

    int genBis = (t/a)*b;
    cout << genBis;

    return 0;
}