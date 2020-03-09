#include <bits/stdc++.h>
 
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned short int us;
 
#define forn(i, n) for (int i = 0; i < int(n); ++i)
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> u(70);
 
        bool no = false;
 
        for (int i = 0; i < n; ++i)
        {
            ll a;
            cin >> a;
 
            int p = 0;
 
            while(a)
            {
                if(a % k)
                {
                    u[p]++;
                    if(u[p] > 1)
                        no = true;
                    --a;
                    if(a % k)
                    {
                        no = true;
                        break;
                    }
                    else
                    {
                        a /= k;
                        ++p;
                    }
                }
                else
                {
                    a /= k;
                    ++p;
                }
            }
        }
 
       /* for(auto i : u)
        {
            cout << u[i] << ' ';
 
            if(u[i] > 1)
            {
                no = true;
                //break;
            }
        }*/
 
        if (no)
            cout << "NO\n";
        else
            cout << "YES\n";
 
 
    }
}
 
 
 