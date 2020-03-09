#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define sz(x) (int)(x).size()
#define pb push_back
#define x first
#define y second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
 
typedef long long ll;
typedef long double ld;
 
typedef pair<int, int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
typedef pair<int,ld> pild;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ld> vd;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<pild> vpild;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<pii>> vvpii;
typedef vector<vector<pll>> vvpll;
typedef unordered_map<int, int> umii;
typedef unordered_map<ll, ll> umll;
typedef unordered_set<int> usi;
typedef unordered_set<ll> usll;
typedef unordered_set<pii> uspii;
typedef unordered_set<string> uss;
typedef queue<int> qi;
typedef complex<double> base;
 
#define FOR(i, a, b) for (int i=a; i<(b); ++i)
#define F0R(i, a) for (int i=0; i<(a); ++i)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; --i)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; --i)
 
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const int inf = 1e9;
const int MX = 1e5 + 1;
 
int gcd(int a, int b) { return a ? gcd(b % a, a) : b; }
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    F0R(q, t) {
        ll n, k;
        cin >> n >> k;
        vll a(n);
        F0R(i, n) cin >> a[i];
        vi mak(60, 0);
        bool flag = true;
        F0R(i, n) {
            while (a[i]) {
                ll curr = 1;
                int cnt = 0;
                while (curr <= a[i]) {
                    curr *= k; ++cnt;
                }
                curr /= k;
                if (mak[cnt]) {
                    cout << "NO\n";
                    flag = false;
                    break;
                }
                mak[cnt] = 1;
                a[i] -= curr;
            }
            if (!flag) break;
        }
        if (flag) cout << "YES\n";
    }
 
    return 0;
}