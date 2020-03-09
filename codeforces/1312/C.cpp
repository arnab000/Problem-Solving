#pragma GCC optimizte("Ofast,fast-math,unroll-loops")
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <map>
#include <math.h>
#include <cmath>
#include <queue>
#include <iomanip>
#include <bitset>
#include <unordered_map>
#include <stack>
#include <memory.h>
#include <list>
#include <numeric>
#include <functional>
#include <complex>
#include <cassert>
#include <random>
 
#pragma comment(linker, "/STACK:36777216")
 
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#else
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cout.precision(20); cout.setf(ios::fixed);
	int t;
	cin >> t;
 
	while (t--) {
		ll n, k;
		cin >> n >> k;
		set<ull>used;
		vector<ull>pows;
		ll v = 1;
		for (int j = 0; ; j++) {
			pows.emplace_back(v);
			if (pows.back() >= 1e16) break;
			v *= k;
		}
 
		int ok = 1;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			for (int j = (int)pows.size() - 1; j >= 0; j--) {
				if (x >= pows[j]) {
					x -= pows[j];
					if (!used.insert(j).second) {
						ok = 0;
						break;
					}
				}
			}
 
			if (x) ok = 0;
		}
 
		if (ok) puts("YES");
		else puts("NO");
	}
	return 0;
}