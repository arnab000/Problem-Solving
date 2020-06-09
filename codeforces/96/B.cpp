#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define f first
#define s second
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define fo(a, b, c) for (int i = a; i < b; i += c)
typedef pair<ll, pair<ll, ll>> pi;
int pow(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y & 1)
            res *= x;
        y >>= 1;
        x *= x;
    }
    return res;
}
struct Compare
{
    constexpr bool operator()(pi const &a,
                              pi const &b) const noexcept
    {
        return a.first < b.first || (a.first == b.first && a.second.first > b.second.first);
    }
};
ll string_to_num(string s)
{
    ll u = 1;
    ll ans = 0;
    for (ll i = s.size() - 1; i >= 0; i--)
    {
        ans += ((s[i] - '0') * u);
        u *= 10;
    }
    return ans;
}

int main()
{
    set<ll> mura;
    for (ll i = 2; i <= 10; i += 2)
    {
        string luck;
        for (ll j = 1; j <= i / 2; j++)
        {
            luck += '4';
        }
        for (ll k = 1; k <= i / 2; k++)
        {
            luck += '7';
        }
        do
        {
            //cout<<luck<<endl;
            mura.insert(string_to_num(luck));
        } while (next_permutation(luck.begin(), luck.end()));
    }

    ll l;
    cin >> l;
    auto it = mura.lower_bound(l);

    cout << *it << endl;
}
