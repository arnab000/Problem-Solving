#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define pb push_back
#define mp make_pair
#define INF (int)1e9
#define cBits(x) __builtin_popcount(x)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) a/gcd(a,b)*b
#define FOR(i,a,b) for (int i=a;i<b;i++)
#define FORr(i,a,b) for (int i=a;i>=b;i--)
#define MAX3(a,b,c) max(a,max(b,c))
#define MIN3(a,b,c) min(a,min(b,c))
#define eachTest int t; cin >> t; while(t--) solve();
 
using namespace std;
 
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<ll,ll> PLL;
typedef pair<int,int> PII;
 
const int MOD=1000000007;
 
void solve() {
	ll n, k;
	cin >> n >> k;
	vector <ll> a(n);
	// set <ll> forEach[n];
	set <ll> uniqReq;
	ll x;
	FOR(i,0,n) {
		cin >> a[i];
	}
	FOR(i,0,n) {
		// cin >> a[i];
		if (a[i]==0) {
			continue;
		}
		x = a[i];
		ll p = 0;
		bool flag = false;
		while(x) {
			ll rem = x%k;
			if (rem > 1) {
				flag = true;
				cout << "NO\n";
				return;
			}
			if (rem == 1) {
				if (uniqReq.find(p) != uniqReq.end()) {
					cout << "NO\n";
					return;
				}
				else {
					uniqReq.insert(p);
				}
			}
			p++;
			x /= k;
		}
	}
	cout << "YES\n";
}
 
int main() {
 
	fastio;
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
 
	eachTest
 
	
 
	return 0;
}