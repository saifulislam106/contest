// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n + 1);
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//     }

//     vector<int> ans(n + 2, 0);

//     vector<bool> visited(100001, false);

//     int distinct_count = 0;

//     for (int i = n; i >= 1; i--) {
//         if (!visited[a[i]]) {
//             visited[a[i]] = true;
//             distinct_count++;
//         }
//         ans[i] = distinct_count;
//     }

//     while (m--) {
//         int l;
//         cin >> l;
//         cout << ans[l] << '\n';
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, m;
   cin >> n >> m;
   vector<int> a(n + 1), cnt(n + 1);
   for (int i = 1;i <= n;i++) {
      cin >> a[i];
   }

   set<int> s;
   for (int i = n;i >= 1;i--) {
      s.insert(a[i]);
      cnt[i] = s.size();
   }

   for (int i = 1;i <= m;i++) {
      int pos;
      cin >> pos;
      cout << cnt[pos] << '\n';
   }

   return 0;
}