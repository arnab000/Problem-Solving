#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define loopitr(i, x) for(auto i=x.begin(); i!=x.end(); i++)
#define loopitrev(i, x) for(auto i=x.rbegin(); i!=x.rend(); i++)
#define bug " BUG\n"
using ll=long long;
using vll=vector<ll>;
using vpp=vector<pair<ll, ll> >;
 
int main() {
    ll n, t1, t2, t3;
    vll arr, same, rem;
    set<int> left;
 
    cin >> n;
    vll sett(n+5, 0);
    for(int i = 0; i < n; i++) {
        cin >> t1;
        arr.push_back(t1);
        sett[t1] = 1;
    }
    for(int i = 1; i <= n; i++) {
        if(sett[i] == 0) left.insert(i);
    }
    loopitr(i, left) {
        if(arr[(*i)-1] == 0) {
            same.push_back(*i);
            //left.erase(*i);
            rem.push_back(*i);
        }
    }
    loopitr(i, rem) {
        left.erase(*i);
        // cout << *i << bug;
    }
    // loopitr(i, left) cout << *i << ' ';
    // cout << bug;
    // loopitr(i, same) cout << *i << ' ';
    for(int i = 0; i < same.size(); i += 2) {
        if(i + 1 < same.size()) {
        arr[same[i]-1] = same[i+1];
        arr[same[i+1]-1] = same[i];}
    }
    if(left.size()!=0) {
        if(same.size()&1) {
            arr[same.back()-1] = *left.begin();
            left.erase(*left.begin());
            for(int i = 0; i < n; i++) {
                if(arr[i] == 0) {
                    arr[i] = same.back();
                    break;
                }
            }
        }
        auto j = left.begin();
        for(int i = 0; i < n; i++) {
            if(!arr[i]) {
                arr[i] = *j;
                j++;
            }
        }
    }
    else if(same.size()&1) {
        arr[same.back()-1] = same[1];
        arr[same[1]-1] = same[0];
        arr[same[0]-1] = same.back();
    }
    loopitr(i, arr) cout << *i << ' ';
}