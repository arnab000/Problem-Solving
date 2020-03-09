#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
using Vi = vector<int>;
using Vl = vector<ll>;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;
 
constexpr int I_INF = numeric_limits<int>::max();
constexpr ll L_INF = numeric_limits<ll>::max();
 
//==================================
 
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int Q;
    cin >> Q;
    while (Q--) {
        int n, k;
        cin >> n >> k;
        Vl a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool ok = true;
        while (1) {
            int cnt = 0;
            int cnt_zero = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) {
                    ++cnt_zero;
                }
                if (a[i] % k == 1) {
                    ++cnt;
                    a[i] /= k;
                }
                else if (a[i] % k == 0) {
                    a[i] /= k;
                }
                else {
                    ok = false;
                    break;
                }
            }
            if (cnt > 1) {
                ok = false;
            }
            if (!ok) {
                break;
            }
            if (cnt_zero == n) {
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
 
    return 0;
}