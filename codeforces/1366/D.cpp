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

ll mx = 10000005;
ll prime[10000007];
ll prime2[10000007];
void SieveOfEratosthenes()
{
    for(ll r=0;r<=mx;r++)
{
    prime[r]=1;
}

    for (ll p = 2; p  <= mx; p++)
    {

        if (prime[p] == 1)
        {

            for (ll i =p+p ; i <= mx; i += p){
                prime[i] *=p ;
                 prime2[i] =p ;
            }
        }
    }
    
    
}

int main()
{
    SieveOfEratosthenes();
    Fast
        ll n;
    cin >> n;
    vector<ll> sura;
   
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
     
        ll o=k;
        if(prime[k]==1)
        {
               ans.push_back({-1, -1});
               continue;
        }
     
     
        if (prime2[o]!=prime[o])
        {
           
            ans.push_back({prime2[o], (prime[o]/prime2[o])});
        }
        else
        {
            ans.push_back({-1, -1});
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i].first << " ";
    }
    cout << '\n';
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i].second << " ";
    }
}
