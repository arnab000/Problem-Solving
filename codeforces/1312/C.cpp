#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<long, long> pll;
const int maxn = 3e5 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
ll T, n, k;
ll bits[70];
void change(ll x) {
    vector<ll> v;
    while (x) {
        v.push_back(x % k);
        x /= k;
    }
    for (int i = 0; i < v.size(); i++) {
        bits[i] += v[i];
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> T;
    while (T--) {
        cin >> n >> k;
 
        memset(bits, 0, sizeof(bits));
        vector<ll> a(n, 0);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            change(a[i]);
        }
        int ok = 1;
        for (int i = 0; i < 64; ++i) {
            if (bits[i] > 1) {
                ok = 0;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
