#include <bits/stdc++.h>
#define li long int
#define lli long long int
using namespace std;
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define rep(i, l, r) for(i=l; i<=r; i++)
#define repr(i, r, l) for(i=r; i>=l; i--)
typedef pair<int, int> pr;
 
class myComp {
    public:
        bool operator() (pr &p1, pr &p2) {
            return p2.se > p1.se;
        }
};
 
void solve() 
{
    int n;
    cin >> n;
    vector<int > f(n, 0);
    vector<int > parent(n, 0);
    priority_queue<pr, vector<pr >, myComp > pq;
    for(int i = 0; i < n; i++) {
        cin >> f[i];
        if(f[i] != 0) {
            parent[f[i]-1] = i + 1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(parent[i] == 0) {
            if(f[i] == 0) {
                pq.push(make_pair(i, 2));
            }
            else {
                pq.push(make_pair(i, 1));
            }
        }
    }
    //cout << pq.top().fi + 1 << "\n";
    for(int i = 0; i < n; i++) {
        if(f[i] == 0) {
            pr ele = pq.top();
            if(ele.fi != i) {
                pq.pop();
                f[i] = ele.fi + 1;
                parent[ele.fi] = i + 1;
            }
            else {
                pq.pop();
                pr ele2 = pq.top();
                pq.pop();
                pq.push(ele);
                f[i] = ele2.fi + 1;
                parent[ele2.fi] = i + 1;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << f[i] << " ";
    }
    cout << "\n";
}
int main()
{
    solve();
    return 0;
}