#include <bits/stdc++.h>
 
using namespace std;
 
#define F first
#define S second
typedef long long   ll;
typedef long double ld;
typedef pair<ll, ll> pll;  

ll n;
vector<vector<int>> e;
vector<int> subtree;
vector<int> c;
vector<int> q; 
vector<bool> used;
vector<int> d;

map<pll, int> suptree;

void DFS(int v, int dd) {
	d[v] = dd;
	used[v] = true;
	for (int i = 0; i < e[v].size(); i++) {
		int nb = e[v][i];
		if (!used[nb])
			DFS(nb, dd + 1);
	}
	q.push_back(v);
}

void count(int v) {
	if (c[v])
		subtree[v]++;
	else
		subtree[v]--;
	for (int i = 0; i < e[v].size(); i++) {
		int nb = e[v][i];
		if (d[nb] > d[v]) 
			if (subtree[nb] > 0)
				subtree[v] += subtree[nb];
	}
	for (int i = 0; i < e[v].size(); i++) {
		int nb = e[v][i];
		if (d[nb] > d[v]) {
			int wo = subtree[v];
			if (subtree[nb] > 0)
				wo -= subtree[nb];
			suptree[{v, nb}] = wo;
		}
	}
}

void count_2(int v) {
	int par = -1;
	for (int i = 0; i < e[v].size(); i++) {
		int nb = e[v][i];
		if (d[nb] < d[v])
			par = nb;
	}
	for (int i = 0; i < e[v].size(); i++) {
		int nb = e[v][i];
		if (d[nb] > d[v]) {
			int add = 0;
			add = max(add, suptree[{v, nb}]);
			for (int j = 0; j < e[nb].size(); j++) {
				int nbnb = e[nb][j];
				if (d[nbnb] > d[nb]) {
					suptree[{nb, nbnb}] += add;
				}
			}
		}
	}
	if (par == -1)
		return;
	if (suptree[{par, v}] > 0)
		subtree[v] += suptree[{par, v}];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    c.resize(n);
    for (int i = 0; i < n; i++)
    	cin >> c[i];
    e.resize(n);
    for (int i = 0; i < n - 1; i++) {
    	int a, b;
    	cin >> a >> b;
    	e[a - 1].push_back(b - 1);
    	e[b - 1].push_back(a - 1);
    }
    used.resize(n, false);
   	d.resize(n);
    DFS(0, 0);

   	subtree.resize(n, 0);
    for (auto v : q)
    	count(v);
/*
    for (int i = 0; i < n; i++)
    	cout << subtree[i] << ' ';
    cout << endl;
    for (auto p : suptree) {
    	cout << p.F.F << ' ' << p.F.S << ": " << p.S << endl;
    }
*/


    reverse(q.begin(), q.end());
    for (auto v : q)
    	count_2(v);

    for (int i = 0; i < n; i++)
    	cout << subtree[i] << ' ';
    cout << endl;
/*
    for (auto p : suptree) {
    	cout << p.F.F << ' ' << p.F.S << ": " << p.S << endl;
    }
*/


    return 0;
}