/*#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);

char arr[105][105];
vector<pair<pair<ll, ll>, pair<pair<ll, ll>, pair<ll, ll>>>> moves;
void flip(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    if (arr[x1][y1] == '0')
        arr[x1][y1] = '1';
    else
    {
        arr[x1][y1] = '0';
    }
    if (arr[x2][y2] == '0')
        arr[x2][y2] = '1';
    else
    {
        arr[x2][y2] = '0';
    }
    if (arr[x3][y3] == '0')
        arr[x3][y3] = '1';
    else
    {
        arr[x3][y3] = '0';
    }
    moves.push_back({{x1, y1}, {{x2, y2}, {x3, y3}}});
}
void three(ll x, ll y)
{
    pair<pair<ll, ll>, pair<pair<ll, ll>, pair<ll, ll>>> u;
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.first.first = i;
                u.first.second = j;
                arr[u.first.first][u.first.second] = '0';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.second.first.first = i;
                u.second.first.second = j;
                arr[u.second.first.first][u.second.first.second] = '0';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.second.second.first = i;
                u.second.second.second = j;
                arr[u.second.second.first][u.second.second.second] = '0';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    moves.push_back(u);
}
void two(ll x, ll y)
{
    pair<pair<ll, ll>, pair<pair<ll, ll>, pair<ll, ll>>> u;
    for (ll i = x; i <= x + 1; i++)
    {
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.first.first = i;
                u.first.second = j;
            }
        }
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '0')
            {
                u.second.first.first = i;
                u.second.first.second = j;
                arr[u.second.first.first][u.second.first.second] = '1';
                hbe = true;
                break;
            }
        }

        if (hbe)
            break;
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '0')
            {
                u.second.second.first = i;
                u.second.second.second = j;
                arr[u.second.second.first][u.second.second.second] = '1';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    moves.push_back(u);

    arr[u.first.first][u.first.second] = '0';

    three(x, y);
}
void one(ll x, ll y)
{
    pair<pair<ll, ll>, pair<pair<ll, ll>, pair<ll, ll>>> u;
    for (ll i = x; i <= x + 1; i++)
    {
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.first.first = i;
                u.first.second = j;
            }
        }
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '0')
            {
                u.second.first.first = i;
                u.second.first.second = j;
                arr[i][j] = '1';
                hbe = true;
                break;
            }
        }

        if (hbe)
            break;
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '0')
            {
                u.second.second.first = i;
                u.second.second.second = j;
                arr[u.second.second.first][u.second.second.second] = '1';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    moves.push_back(u);

    arr[u.first.first][u.first.second] = '0';

    two(x, y);
}
void four(ll x, ll y)
{
    pair<pair<ll, ll>, pair<pair<ll, ll>, pair<ll, ll>>> u;
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.first.first = i;
                u.first.second = j;
                arr[u.first.first][u.first.second] = '0';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.second.first.first = i;
                u.second.first.second = j;
                arr[u.second.first.first][u.second.first.second] = '0';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    for (ll i = x; i <= x + 1; i++)
    {
        bool hbe = false;
        for (ll j = y; j <= y + 1; j++)
        {
            if (arr[i][j] == '1')
            {
                u.second.second.first = i;
                u.second.second.second = j;
                arr[u.second.second.first][u.second.second.second] = '0';
                hbe = true;
                break;
            }
        }
        if (hbe)
            break;
    }
    moves.push_back(u);
    one(x, y);
}

int main()
{
    Fast
        ll test;
    cin >> test;
    while (test--)
    {
        ll n, m;
        cin >> n >> m;
        moves.clear();
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        for (ll j = 0; j < m - 2; j++)
        {
            for (ll i = 0; i < n; i++)
            {

                if (arr[i][j] == '1')
                {
                    if (i == n - 1)
                    {

                        flip(i, j, i, j + 1, i - 1, j + 1);
                    }
                    else
                    {

                        flip(i, j, i, j + 1, i + 1, j + 1);
                    }
                }
            }
        }
        if (n % 2 != 0)
        {
            if (arr[n - 1][m - 1] == '1' && arr[n - 1][m - 2] == '1')
            {
                flip(n - 1, m - 1, n - 1, m - 2, n - 2, m - 2);
            }
            else if (arr[n - 1][m - 1] == '1')
            {
                flip(n - 1, m - 1, n - 2, m - 1, n - 2, m - 2);
            }
            else if (arr[n - 1][m - 2] == '1')
            {
                flip(n - 1, m - 2, n - 2, m - 1, n - 2, m - 2);
            }
        }
        ll r = m - 2;
        for (ll l = 0; l < n - 1; l += 2)
        {
            ll cnt = 0;
            for (ll i = l; i <= l + 1; i++)
            {

                for (ll j = r; j <= r + 1; j++)
                {
                    if (arr[i][j] == '1')
                    {
                        cnt++;
                    }
                }
            }
            if (cnt == 1)
            {
                one(l, r);
            }
            else if (cnt == 2)
            {
                two(l, r);
            }
            else if (cnt == 3)
            {
                three(l, r);
            }
            else if (cnt == 4)
            {
                four(l, r);
            }
        }
        // for(ll i=0;i<n;i++)
        // {
        //     for(ll j=0;j<m;j++)
        //     {
        //         cout<<arr[i][j];
        //     }
        //     cout<<endl;
        // }

        if (!moves.empty())
        {
            cout << moves.size() << '\n';
            for (ll ami = 0; ami < moves.size(); ami++)
            {
                cout << moves[ami].first.first + 1 << " " << moves[ami].first.second + 1 << " " << moves[ami].second.first.first + 1 << " " << moves[ami].second.first.second + 1 << " " << moves[ami].second.second.first + 1 << " " << moves[ami].second.second.second + 1 << '\n';
            }
        }
        else
        {
            cout << 0 << '\n';
        }
    }
}
