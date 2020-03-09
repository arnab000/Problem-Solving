#include <bits/stdc++.h>
#define sqr(a) ((a)*(a))
#define rsz resize
#define forr(i,a,b) for(int i=(a);i<(b);i++)
#define forn(i,n) forr(i,0,n)
#define dforn(i,n) for(int i=n-1;i>=0;i--)
#define forall(it,v) for(auto it=v.begin();it!=v.end();it++)
#define sz(c) ((int)c.size())
#define zero(v) memset(v, 0, sizeof(v))
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define fst first
#define snd second
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
int main()
{
	#ifdef REJUNTE
	freopen("input.in","r",stdin);
	//freopen("output.out","w",stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
 
	ll k,n,aux,cont;
	int t;
	bool rta;
	ll a;
	bool used[60];
	vector<ll>::iterator it;
	cin >> t;
	while(t--){
		cin >> n >> k;
		rta = true;
		zero(used);
		forn(i,n){
			cin >> a;
			while(a>0){
				aux = 1;
				cont = 0;
				while(aux*k<=a){
					cont++;
					aux*=k;
				}	
				if(used[cont]){
					rta = false;
					break;
				}
				a-=aux;
				used[cont]=true;
			}
		}
		cout << (rta? "YES" : "NO") << endl;
 
 
		
	}
 
	return 0;
}