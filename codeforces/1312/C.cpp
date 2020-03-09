
#include <bits/stdc++.h>
using namespace std;
#define rep(i, a, b) for (int (i) = (a); (i) < (b); ++(i))
#define per(i, a, b) for (int (i) = (a); (i) >= (b); --(i))
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define eb emplace_back
#define ff first
#define ss second
#define sz(x) ((int) x.size())
#define rd(type, ...) type __VA_ARGS__; sc(__VA_ARGS__)
#define rda(a, n) rep(i, 0, n) cin >> a[i];
#define rdaa(a, n, m) rep(i, 0, n) rep(j, 0, m) cin >> a[i][j];
#define rdv(type, v, n) vector<type> v(n); rep(__ii, 0, n) cin >> v[__ii]
#define rdm(type, v, h, w) vector<vector<type>> v(h, vector<type>(w)); rep(__ii, 0, h) rep(__jj, 0, w) cin >> v[__ii][__jj]
#define rdv2(type, n, ...)std::vector<type> __VA_ARGS__;MACRO_rdv2_Init(n, __VA_ARGS__); for(int w_=0; w_<n; ++w_){MACRO_rdv2_Scan(w_, __VA_ARGS__);}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] : ", debug_out(__VA_ARGS__)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define err2(x) {wr(x); return;}
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
void rset();
void init_test();
void solve();
signed main() {ios::sync_with_stdio(false); cin.tie(0);
  cout << fixed; cout.precision(20); init_test(); return 0;}
template<typename T> void chmin(T &a, T b) {if (a > b) a = b;}
template<typename T> void chmax(T &a, T b) {if (a < b) a = b;}
template<typename T> void MACRO_rdv2_Init(int n, T& t) { t.resize(n); }
template<typename First, typename... Rest> void MACRO_rdv2_Init(int n, First& first, Rest& ...rest) { first.resize(n); MACRO_rdv2_Init(n, rest...); }
template<typename T> void MACRO_rdv2_Scan(int p, T& t) { std::cin >> t[p]; }
template<typename First, typename... Rest> void MACRO_rdv2_Scan(int p, First& first, Rest& ...rest) { std::cin >> first[p]; MACRO_rdv2_Scan(p, rest...); }
template<typename T> void wrv(const vector<T> &v) {rep(__ii, 0, sz(v)) {if (__ii) cout << ' '; cout << v[__ii];} cout << '\n';} 
template<typename T> void wrm(const vector<vector<T>> &v) {rep(__ii, 0, sz(v)) {rep(__jj, 0, v[__ii].size()) {if (__jj) cout << ' '; cout << v[__ii][__jj];} cout << '\n';}}
template<typename T> void sc(T& x) {cin >> x;}
template<typename Head, typename... Tail> void sc(Head& head, Tail&... tail) {cin >> head; sc(tail...);}
template<typename T> void wr(const T& x) {cout << x << '\n';}
template<typename Head, typename... Tail> void wr(const Head& head, const Tail&... tail) {cout << head << ' '; wr(tail...);}
template<typename T> void wrf(const T& x) {cout << x << endl;}
template<typename Head, typename... Tail> void wrf(const Head& head, const Tail&... tail) {cout << head << ' '; wrf(tail...);}
template<typename T> void debug_out(const T& x) {cerr << x << '\n';}
template<typename Head, typename... Tail> void debug_out(const Head& head, const Tail&... tail) {cerr << head << ' '; debug_out(tail...);}
template<typename... T> void err(const T&... cod) {wr(cod...); exit(0);}
 
bool coba(vll a, vll &pwr, ll k) {
  int step = 9;
 
  vll b = a;
  rep(mask, 0, (1 << step)) {
    per(j, step - 1, 0) {
      if ((mask >> j) & 1) {
        int at = max_element(all(a)) - a.begin();
        a[at] -= pwr[j];
      }
    }
    bool ok = true;
    rep(i, 0, sz(a)) ok &= !a[i];
    if (ok) return true;
    rep(j, 0, sz(a)) a[j] = b[j];
  }
 
  return false;
}
 
void solve() {
  rd(int, n, k);
  rdv(ll, a, n);
  ll bound = accumulate(all(a), 0LL);
  if (bound == 0) {
    wr("YES");
    return;
  }
 
  vll pwr(66, 1);
  rep(i, 1, 66) pwr[i] = pwr[i - 1] * k;
 
  ll cur = 1, step = 0;
  while (cur <= bound) cur *= k, ++step;
  cur /= k, --step;
 
  ll s = 0;
  rep(i, 0, n) s += a[i];
  while (step >= 0) {
    if (s < pwr[step]) {
      --step;
      continue;
    }
    int at = max_element(all(a)) - a.begin();
    a[at] -= pwr[step];
    s -= pwr[step];
    --step;
  }
 
  bool ok = true;
  rep(i, 0, sz(a)) ok &= !a[i];
  wr(ok ? "YES" : "NO");
  // rset();
}
 
void init_test() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int qq = 1;
  cin >> qq;
  while (qq--) solve();
}