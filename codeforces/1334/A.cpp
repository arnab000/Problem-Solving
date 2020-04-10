
#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void solve(ll cs) {
    ll n, pi, ci, lpi = INT_MIN, lci = INT_MIN;
    cin >> n;
    bool yes = true;
    for (ll i = 0; i < n; i++) {
        cin >> pi >> ci;
        if(pi < ci || pi < lpi || ci < lci || (i > 0 && (pi - lpi) < (ci - lci))){
            yes = false;
        }
        lpi = pi; lci = ci;
    }
    cout << (yes ? "YES" : "NO") << endl;
}
 
int main() {
    ll t;
    cin >> t;
    for(ll i = 0; i < t; i++) {
        solve(i+1);
    }
    return 0;
}