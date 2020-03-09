#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <sstream>
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define mod 1000000007
#define eps 1e-6
#define ll long long
#define INF 0x3f3f3f3f
#define MEM(x, y) memset(x, y, sizeof(x))
using namespace std;
int dt[][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}, {0, 0}};
//typedef pair<int, int> P;
//priority_queue<int, vector<int>, greater<int> > q;
const int N = 1e4 + 10;
ll a[N];
bool f;
int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        f = 1;
        cin >> n >> k;
        MEM(a, 0);
        ll num;
        ll cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            cnt = 0;
            while (num)
            {
                a[cnt] += num % k;
                num /= k;
                if (a[cnt++] > 1)
                {
                    f = 0;
                }
            }
        }
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}