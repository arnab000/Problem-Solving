//#include<bits/stdc++.h>
#include<set>
#include<map>
#include<stack>
#include<cmath>
#include<queue>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pii pair < int,int>
#define pll pair < ll , ll >
#define X first
#define Y second
inline ll gcd(ll a, ll b) { while (b != 0) { ll c = a % b; a = b; b = c; }return a < 0 ? -a : a; }
inline ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
inline ll lowbit(ll x) { return x & (-x); }
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const ll mod = 998244353;
inline ll rd() {
	ll x = 0, f = 1; char ch = getchar();
	while (ch<'0' || ch>'9') { if (ch == '-')f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = (x << 3) + (x << 1) + (ch ^ 48); ch = getchar(); }
	return x * f;
}
const double eps = 1e-8;
const int M = 4e6 + 10;
const int N = 1e6 + 10;
int g[N];
int bg[N];
char s[N];
bool vis[N];
vector<int>v;
int main() {
	int n = rd();
	for (int i = 1; i <= n; i++) {
		g[i] = rd();
		if (g[i] != 0)
			bg[g[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		if (g[i] == 0 && bg[i] == 0)v.push_back(i);
	}
	bool flag = 0;
	for (int i = 1; i <= n; i++) {
		//if (vis[i])continue;
		if (g[i] != 0 && bg[i] == 0) {
			int tmp = i;
			while (g[tmp] != 0) {
				//vis[tmp] = 1;
				tmp = g[tmp];
			}
			if (!flag) {
				for (int j = 0; j < v.size(); j++) {
					g[tmp] = v[j];
					bg[v[j]] = tmp;
					tmp = v[j];
				}
				//g[tmp] = i;
				flag = 1;
			}
			g[tmp] = i;
		}
	}
	if (!flag && v.size()) {
		int tmp = v[0];
		for (int i = 1; i < v.size(); i++) {
			g[tmp] = v[i];
			tmp = v[i];
		}
		g[tmp] = v[0];
	}
	for (int i = 1; i <= n; i++) {
		cout << g[i] << " ";
	}
	cout << endl;
}