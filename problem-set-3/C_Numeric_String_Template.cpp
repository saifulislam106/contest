#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

              map<int, vector<int>> mp1;

            for (int i = 0; i < n; ++i)
            {
                int val = a[i];
                int position = i +1;
                mp1[val].push_back(position);
            }


        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            if (s.size() != n)
            {
                cout << "NO\n";
                continue;
            }
                map<char, vector<int>> mpStr;

            for (int i = 0; i < s.size(); ++i)
            {
                char charVal = s[i];
                int position = i +1;
                mpStr[charVal].push_back(position);
            }

            int flag = 1;
            
            map <int, int> duplicate;

            for(int i =0; i<n ; ++i){
                int val = a[i];
                char ch = s[i];

                if(duplicate[val]>0){
                    continue;
                }

                if(mp1[val] != mpStr[ch]){
                    flag = 0;
                    break;
                }
                duplicate[val]++;

            }
            if(flag == 1) cout << "YES\n";
            else cout << "NO\n";
            
        }
    }

    return 0;
}

// input 
// 3
// 5
// 3 5 2 1 3
// 2
// abfda
// afbfa
// 2
// 1 2
// 3
// ab
// abc
// aa
// 4
// 5 -3 5 -3
// 4
// aaaa
// bcbc
// aba
// cbcb


// output 

// YES
// NO
// YES
// NO
// NO
// NO
// YES
// NO
// YES
