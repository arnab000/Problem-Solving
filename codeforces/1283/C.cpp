#include <bits/stdc++.h>
#pragma GCC optimize("O2")
#define all(c) c.begin(), c.end()
#define pb push_back
#define ll long long
const int MAXN = 2e5 + 5;
const int mod = 1e9 + 7;
 
using namespace std;
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  int f[MAXN];
  set<int> se;
  for (int i = 1; i <= n; i++)
    se.insert(i);
  for (int i = 1; i <= n; i++) {
    cin >> f[i];
    if (f[i] != 0)
      se.erase(f[i]);
  }
  int j = 0;
  for (int i = 1; i <= n; i++) {
    if (f[i] != 0) continue;
    if (i == *se.begin() && se.size() == 1) {
      f[i] = f[j];
      f[j] = i;
      continue;
    }
    j = i;
    if (i != *se.begin()) {
      f[i] = *se.begin();
      se.erase(se.begin());
    } else {
      f[i] = *next(se.begin());
      se.erase(next(se.begin()));
    }
  }
  for (int i = 1; i <= n; i++)
    cout << f[i] << ' ';
  return 0;
}