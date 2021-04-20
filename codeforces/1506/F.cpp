#include <bits/stdc++.h>
using namespace std;
const int MX = 2e5 + 5;
vector<pair<int, int>> p;
int t, n, r[MX], c[MX], pr, pc;
long long x;
int f(int r1, int c1, int r2, int c2)
{
    if (r1 - c1 == r2 - c2)
    {
        return (r1 + c1) % 2 ? 0 : r2 - r1;
    }
    r2 -= r1 - 1;
    c2 -= c1 - 1;
    return r1 % 2 == c1 % 2 ? (r2 - c2) / 2 : (r2 - c2 + 1) / 2;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> r[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        p.clear();
        for (int i = 0; i < n; i++)
        {
            p.emplace_back(r[i], c[i]);
        }
        sort(p.begin(), p.end());
        x = 0;
        pr = pc = 1;
        for (auto [cr, cc] : p)
        {
            x += f(pr, pc, cr, cc);
            pr = cr;
            pc = cc;
        }
        cout << x << "\n";
    }
    return 0;
}