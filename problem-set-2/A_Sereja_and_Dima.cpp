#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0;
    int dima = 0;

    bool rep = true;
    while (l <= r)
    {
        int pick;
        if (a[r] > a[l])
        {
            pick = a[r];
            r--;
        }
        else
        {
            pick = a[l];
            l++;
        }
        if (rep)
        {
            sereja += pick;
        }
        else
        {
            dima += pick;
        }

        rep = !rep;
    }
    cout << sereja << " " << dima;
    return 0;
}