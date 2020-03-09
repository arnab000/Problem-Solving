/*author:	Slnc*/
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#include <bits/stdc++.h>
#include<string>
#include <utility>/*useful*/
#include <iomanip>//setprecision()
 
#define pb push_back
#define pp pop_back
#define ll long long
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>
#define vs vector<string>
#define vl vector<ll>
#define mp make_pair
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
 
using namespace std;
 
void NITRO(){
	//MY CODE IS THE BEST :)
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
const ll N = 1e+17;
const int MOD = 1e+9 + 7;
const ll INF = 1e+18;
 
void SOLVE() {
    int n, k;
    cin >> n >> k;
    unsigned ll ma = 1;
    set<ll> po;
    while(ma <= N){
        po.insert(ma);
        ma *= k;
    }
    bool was[100], can = 1;
    while(n--){
        ll s;
        cin >> s;
        if(s != 0){
            if(po.find(s) != po.end()){
                po.erase(po.find(s));
            }
            else{
                while(s > 0 && !po.empty()){
                    if(po.find(s) != po.end()){
                        po.erase(po.find(s));
                        s = 0;
                        break;
                    }
                    if(po.lower_bound(s) != po.end() && po.lower_bound(s) != po.begin()){
                        set<ll>::iterator lb = po.lower_bound(s);
                        --lb;
                        s -= *lb;
                        po.erase(*lb);
                    }
                    else break;
                }
                if(s != 0)can = 0;
            }
        }
    }
    if(can)cout << "YES";
    else cout << "NO";
    cout << "\n";
}
 
int main() {
    NITRO();
    int t;
    cin >> t;
    while(t--) {
        SOLVE();
    }
    return 0;
}