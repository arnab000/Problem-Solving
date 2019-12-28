#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define vec vector
#define psb push_back
#define ppb pop_back
#define mkp make_pair
#define fst first
#define scd second
#define ins insert
#define psf push_front
#define ppf pop_front
using namespace std;
int main() {
	//ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll n, i;
	cin >> n;
	ll a[n];
	ll indeg[n] = {0};
	ll outdeg[n] = {0};
	for(i = 0; i < n; i++) {
		cin >> a[i];
 		a[i]--;
		if(a[i] > -1) {
			indeg[a[i]]++;
			outdeg[i]++;
		}
	}
	vec<ll> b;
	for(i = 0; i < n; i++) {
		if(indeg[i] == 0 && outdeg[i] == 0) {
			b.psb(i);
		}
	}
	ll sz = b.size();
	for(i = 0; i < sz - 1; i++) {
		a[b[i]] = b[i + 1];
		outdeg[b[i]]++;
		indeg[b[i+1]]++;
	}
	set<ll> cc, dd, bb;
	for(i = 0; i < n; i++) {
		if(outdeg[i] == 0 && indeg[i] == 0){
			bb.ins(i);
			continue;
		}
		if(outdeg[i] == 0){
			cc.ins(i);
		}
		if(indeg[i] == 0){
			dd.ins(i);
		}
	}
	if(!bb.empty()) {
		a[*cc.begin()] = *bb.begin();
		cc.erase(*cc.begin());
		cc.ins(*bb.begin());
	}
	while(!cc.empty()) {
		a[*cc.begin()] = *dd.begin();
		dd.erase(*dd.begin());
		cc.erase(*cc.begin());
	}
	for(i = 0; i < n; i++)
		cout<< a[i] + 1 <<" ";
 	return 0;
}