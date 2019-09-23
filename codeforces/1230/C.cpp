#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector< vector<int> > graph(n);
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	vector<int> p(7);
	iota(p.begin(), p.end(), 0);
	int ans = 0;
	do {
		for (int x = 1; x <= 6; x++) {
			set< pair<int, int> > se;
			for (int i = 0; i < n; i++) {
				if (p[i] == 0) {
					p[i] = x;
					break;
				}
			}
			for (int u = 0; u < n; u++) {
				for (int v : graph[u]) {
					if (p[u] && p[v]) {
						se.insert(make_pair(min(p[u], p[v]), max(p[u], p[v])));
					}
				}
			}
			ans = max(ans, (int)se.size());
		}
	} while (next_permutation(p.begin(), p.end()));
	cout << ans << '\n';

	return 0;
}
