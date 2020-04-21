#include<bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define fr first
#define sc second
#define ll long long int
#define bit(idx) idx&(-idx)
#define bin(x, a) bitset<a>(x)
#define all(A) A.begin(), A.end()
#define debug(x) cout << #x << " = " << x << endl;
using namespace std;

const int MAXN = 2e5 + 5;
const ll INF = -2e18;

ll dp1[MAXN][2];

void s(){
	ll n; cin >> n;
	memset(dp1, 0, sizeof(dp1));
	vector<ll> A(n);
	for(int i = 0; i < n; i ++) cin >> A[i];
	if(A[0] < 0) dp1[0][0] = A[0];
	if(A[0] > 0) dp1[0][1] = A[0];
	for(int i = 1; i < n; i ++){
		if(A[i] < 0){
			dp1[i][0] = max(dp1[i - 1][0], dp1[i - 1][1] + 1);
			dp1[i][1] = dp1[i - 1][1];
		}
		if(A[i] > 0){
			dp1[i][1] = max(dp1[i - 1][1], dp1[i - 1][0] + 1);
			dp1[i][0] = dp1[i - 1][0];
		}
	}
	int mxsz = -1;
	if(dp1[n - 1][0] == 0) mxsz = dp1[n - 1][1];
	if(dp1[n - 1][1] == 0) mxsz = dp1[n - 1][0];
	else mxsz = max(dp1[n - 1][1], dp1[n - 1][0]);
	ll ans = 0;
	for(int i = 0; i < n; i ++){
		ll j = i, mx = INF;
		while(A[i] * A[j] > 0 && j < n){
			mx = max(mx, A[j]);
			++ j;
		}
		ans += mx;
		i = j - 1;
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(); cout.tie();
	int t; cin >> t; while(t --) s();
}
/**

*/